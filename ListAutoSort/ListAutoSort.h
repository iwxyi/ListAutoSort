#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ListAutoSort.h"
#include <QClipboard>
#include <QMimeData>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>
#include <QMenu>
#include <QPoint>
#include <QAction>
#include "TitleItem.h"
#include "FileUtil.h"
#include "Global.h"
#include "StringUtil.h"
#include "ListItemDelegate.h"

class ListAutoSort : public QMainWindow
{
	Q_OBJECT

public:
	ListAutoSort(QWidget *parent = Q_NULLPTR);

private:
	void initView();
	void initTable();

	void smartAddInfo(QString str);

	void readInfoTitles();
	void writeInfoTitles();
	void refreshList();

public slots :
	void slotAddCol();
	void slotInputButtonClicked();
	void slotPasteButtonClicked();
	void slotListItemMenu(QPoint p);
	void slotDeleteListItem();
	void slotTitleItemTextModified(int row, QString text);

signals:

private:
	Ui::ListAutoSortClass ui;

	QList<TitleItem> titles;
};
