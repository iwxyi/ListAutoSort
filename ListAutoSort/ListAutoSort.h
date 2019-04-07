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
#include <QListWidgetItem>
#include "FieldItem.h"
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

	void smartAddMixture(QString str);

	void readFIeldsInfo();
	void writeFieldsInfo();
	void refreshFieldsInfo();

public slots :
	void slotInputButtonClicked();
	void slotPasteButtonClicked();
	void slotFieldItemAdd();
	void slotFieldItemMenu(QPoint p);
	void slotFieldItemDelete();
	void slotFieldItemRowChanged();
	void slotFieldItemTextModified(int row, QString text);
	void slotFieldItemPatternModified(QString text);

signals:

private:
	Ui::ListAutoSortClass ui;

	QString savedPath;
	QList<FieldItem> fields;
};
