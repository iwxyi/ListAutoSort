#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ListAutoSort.h"
#include <QClipboard>
#include <QMimeData>
#include <QDebug>
#include <QMessageBox>
#include <QStringList>
#include "InfoItem.h"
#include "FileUtil.h"
#include "Global.h"
#include "StringUtil.h"

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

signals:

private:
	Ui::ListAutoSortClass ui;

	QList<InfoItem> titles;
};
