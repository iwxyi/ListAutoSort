#include "ListAutoSort.h"

ListAutoSort::ListAutoSort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	rt = new RuntimeInfo();
	us = new USettings(rt->DATA_PATH + "settings.ini");
	savedPath = rt->DATA_PATH + "fields.txt";

	readFIeldsInfo();
	initView();
	initTable();;

}
/**
 * 初始化控件与连接
 */
void ListAutoSort::initView()
{
	ui.titileList->setEditTriggers(QAbstractItemView::DoubleClicked);
	ListItemDelegate* delegate = new ListItemDelegate(this);
	ui.titileList->setItemDelegate(delegate);
	connect(delegate, SIGNAL(signalTextModified(int, QString)), this, SLOT(slotFieldItemTextModified(int, QString)));

	connect(ui.addCol, SIGNAL(clicked()), this, SLOT(slotFieldItemAdd()));
	connect(ui.inputButton, SIGNAL(clicked()), this, SLOT(slotInputButtonClicked()));
	connect(ui.pasteButton, SIGNAL(clicked()), this, SLOT(slotPasteButtonClicked()));
	connect(ui.titileList, SIGNAL(customContextMenuRequested(QPoint)), this, SLOT(slotFieldItemMenu(QPoint)));
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
void ListAutoSort::smartAddMixture(QString str)
{
	QMessageBox::information(this, QStringLiteral("分析"), str);
}

/*
 * 从保存的文件中读取
 */
void ListAutoSort::writeFieldsInfo()
{
	QString content;

	for (int i = 0; i < fields.size(); i++)
	{
		QString n = fields[i].getName();
		QString p = fields[i].getPattern();
		QString c = toXml(n, "name") + toXml(p, "pattern");
		content += toXml(c, "field");
	}

	writeTextFile(savedPath, content);
}

/**
 * 保存到文件之中
 */
void ListAutoSort::readFIeldsInfo()
{
	if (!isFileExist(savedPath))
		return;
	QString content = readTextFile(savedPath);

	QStringList ts = getXmls(content, "field");

	for (int i = 0; i < ts.size(); i++)
	{
		QString n = getXml(ts[i], "name");
		QString p = getXml(ts[i], "pattern");
		fields.append(FieldItem(n, p));
	}

	refreshFieldsInfo();
}

/**
 * 做了更改之后刷新列表
 */
void ListAutoSort::refreshFieldsInfo()
{
	ui.titileList->clear();

	for (int i = 0; i < fields.size(); i++)
	{
		QListWidgetItem* item = new QListWidgetItem(fields[i].getName(), ui.titileList);
		item->setFlags(item->flags() | Qt::ItemIsEditable);
	}
}

/**
 * TableVIew添加一列，后续可以编辑
 */
void ListAutoSort::slotFieldItemAdd()
{
	QListWidgetItem* item = new QListWidgetItem(QStringLiteral("新字段"), ui.titileList);
	item->setFlags(item->flags() | Qt::ItemIsEditable);
	fields.append(FieldItem(QStringLiteral("新字段"), ""));
	writeFieldsInfo();
}

/**
 * 添加 ui.inputEdit 中的内容到表格中
 */
void ListAutoSort::slotInputButtonClicked()
{
	QString str = ui.inputEdit->toPlainText();
	smartAddMixture(str);
}

/**
 * 直接添加剪贴板中的内容到表格中
 */
void ListAutoSort::slotPasteButtonClicked()
{
	const QClipboard* clipboard = QApplication::clipboard();
	QString str = clipboard->text();
	smartAddMixture(str);
}

void ListAutoSort::slotFieldItemMenu(QPoint p)
{
	QListWidgetItem* item = ui.titileList->itemAt(p);
	if (item == NULL)
		return;

	QMenu* menu = new QMenu(this);
	QAction* deleteAction = new QAction(QStringLiteral("删除"), this);
	menu->addAction(deleteAction);
	connect(deleteAction, SIGNAL(triggered()), this, SLOT(slotFieldItemDelete()));
	menu->exec(QCursor::pos());
}

void ListAutoSort::slotFieldItemDelete()
{
	QListWidgetItem* item = ui.titileList->currentItem();
	if (item == NULL)
		return;

	int index = ui.titileList->currentIndex().row();
	if (index >= 0 && index < fields.size())
		fields.removeAt(index);

	ui.titileList->takeItem(index); // 不知道为什么removeWidgetItem无效
	delete item; // takeItem 需要手动 delete
	writeFieldsInfo();
}

void ListAutoSort::slotFieldItemTextModified(int row, QString text)
{
	if (row < 0 || row >= fields.size())
		return;
	if (fields[row].getName() == text)
		return;

	fields[row].setName(text);
	writeFieldsInfo();
}

void ListAutoSort::slotFieldItemPatternModified(QString text)
{
	int index = ui.titileList->currentIndex;
	if (index < 0 || index >= fields.size())
		return;
	fields[index].setPattern(text);
	writeFieldsInfo();
}
