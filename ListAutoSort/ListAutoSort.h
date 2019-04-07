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
#include <QTableWidgetItem>
#include <QTableWidget>
#include "FieldItem.h"
#include "FileUtil.h"
#include "Global.h"
#include "StringUtil.h"
#include "ListItemDelegate.h"
#include "TableAITool.h"

class ListAutoSort : public QMainWindow
{
	Q_OBJECT

public:
	ListAutoSort(QWidget *parent = Q_NULLPTR);

private:
	void initView();
	void setTableHeader();

	void readFIeldsInfo();
	void writeFieldsInfo();
	void refreshFieldsInfo();

	void smartAddMixture(QString str);
	bool setTableARow(int row, QString mixture, QList<FieldItem>fields);
	QStringList analyzeMixture(QString mixture, QList<FieldItem>fields);

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
	QStringList mixtures;
};
