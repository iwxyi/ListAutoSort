#include "ListAutoSort.h"

ListAutoSort::ListAutoSort(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	initView();
	initTable();
}

/**
 * 初始化控件与连接
 */
void ListAutoSort::initView()
{
	connect(ui.addCol, SIGNAL(clicked()), this, SLOT(slotAddCol()));
	connect(ui.inputButton, SIGNAL(clicked()), this, SLOT(slotInputButtonClicked()));
	connect(ui.pasteButton, SIGNAL(clicked()), this, SLOT(slotPasteButtonClicked()));
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

}

/*
 * 从保存的文件中读取
 */
void ListAutoSort::readInfoTitles()
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
void ListAutoSort::writeInfoTitles()
{
	QString savedPath = rt->DATA_PATH + "titles.txt";
	QString content = readTextFile(savedPath);
	QStringList ts = getXmls(content, "titles");

	for (int i = 0; i < ts.size(); i++)
	{
		QString n = getXml(ts[i], "name");
		QString p = getXml(ts[i], "pattern");
		titles.append(InfoItem(n, p));
	}
}

/**
 * 做了更改之后刷新列表
 */
void ListAutoSort::refreshList()
{

}

/**
 * TableVIew添加一列，后续可以编辑
 */
void ListAutoSort::slotAddCol()
{

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
