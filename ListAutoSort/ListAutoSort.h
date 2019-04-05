#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ListAutoSort.h"

class ListAutoSort : public QMainWindow
{
	Q_OBJECT

public:
	ListAutoSort(QWidget *parent = Q_NULLPTR);

private:
	Ui::ListAutoSortClass ui;
};
