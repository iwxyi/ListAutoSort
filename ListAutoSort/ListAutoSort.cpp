#include "ListAutoSort.h"

ListAutoSort::ListAutoSort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initView();
	initTable();
	readInfoTitles();
}

/**
 * 初始化控件与连接
 */
void ListAutoSort::initView()
{
	ui.titileList->setEditTriggers(QAbstractItemView::DoubleClicked);
	ListItemDelegate* delegate = new ListItemDelegate(this);
	ui.titileList->setItemDelegate(delegate);
	connect(delegate, SIGNAL(signalTextModified(int, QString)), this, SLOT(slotTitleItemTextModified(int, QString)));

	connect(ui.addCol, SIGNAL(clicked()), this, SLOT(slotAddCol()));
	connect(ui.inputButton, SIGNAL(clicked()), this, SLOT(slotInputButtonClicked()));
	connect(ui.pasteButton, SIGNAL(clicked()), this, SLOT(slotPasteButtonClicked()));
	connect(ui.titileList, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(slotListItemMenu(QPoint)));
}

/**
 * 初始化保存表格
 */
void ListAutoSort::initTable()
{

}

/**
 * 从一段话中智能分辨不同的信息
 */
void ListAutoSort::smartAddInfo(QString str)
{
	QMessageBox::information(this, QStringLiteral("分析"), str);
}

/*
 * 从保存的文件中读取
 */
void ListAutoSort::writeInfoTitles()
{
	QString savedPath = rt->DATA_PATH+"titles.txt";
	QString content;

	for (int i = 0; i < titles.size(); i++)
	{
		QString n = titles[i].getName();
		QString p = titles[i].getPattern();
		QString c = toXml(n, "name") + toXml(p, "pattern");
		content += toXml(c, "title");
	}

	writeTextFile(savedPath, content);
}

/**
 * 保存到文件之中
 */
void ListAutoSort::readInfoTitles()
{
	QString savedPath = rt->DATA_PATH + "titles.txt";
	QString content = readTextFile(savedPath);
	QStringList ts = getXmls(content, "titles");

	for (int i = 0; i < ts.size(); i++)
	{
		QString n = getXml(ts[i], "name");
		QString p = getXml(ts[i], "pattern");
		titles.append(TitleItem(n, p));
	}
}

/**
 * 做了更改之后刷新列表
 */
void ListAutoSort::refreshList()
{
	ui.titileList->clear();

	for (int i = 0; i < titles.size(); i++)
	{
		QListWidgetItem* item = new QListWidgetItem(titles[i].getName(), ui.titileList);
		item->setFlags(item->flags() | Qt::ItemIsEditable);
	}
}

/**
 * TableVIew添加一列，后续可以编辑
 */
void ListAutoSort::slotAddCol()
{
	QListWidgetItem* item = new QListWidgetItem(QStringLiteral("新字段"), ui.titileList);
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	titles.append(TitleItem(QStringLiteral("新字段"), ""));
	writeInfoTitles();
}

/**
 * 添加 ui.inputEdit 中的内容到表格中
 */
void ListAutoSort::slotInputButtonClicked()
{
	QString str = ui.inputEdit->toPlainText();
	smartAddInfo(str);
}

/**
 * 直接添加剪贴板中的内容到表格中
 */
void ListAutoSort::slotPasteButtonClicked()
{
	const QClipboard* clipboard = QApplication::clipboard();
	QString str = clipboard->text();
	smartAddInfo(str);
}

void ListAutoSort::slotListItemMenu(QPoint p)
{
	QListWidgetItem* item = ui.titileList->itemAt(p);
	if (item == NULL)
		return;

	QMenu* menu = new QMenu(this);
	QAction* deleteAction = new QAction(QStringLiteral("删除"), this);
	menu->addAction(deleteAction);
	connect(deleteAction, SIGNAL(triggered()), this, SLOT(slotDeleteListItem()));
	menu->exec(QCursor::pos());
}

void ListAutoSort::slotDeleteListItem()
{
	QListWidgetItem* item = ui.titileList->currentItem();
	if (item == NULL)
		return;

	int index = ui.titileList->currentIndex().row();
	if (index >= 0 && index < titles.size())
		titles.removeAt(index);

	ui.titileList->takeItem(index); // 不知道为什么removeWidgetItem无效
	delete item; // takeItem 需要手动 delete
	writeInfoTitles();
}

void ListAutoSort::slotTitleItemTextModified(int row, QString text)
{
	if (row < 0 || row >= titles.size())
		return;
	if (titles[row].getName() == text)
		return;

	titles[row].setName(text);
	writeInfoTitles();
}
