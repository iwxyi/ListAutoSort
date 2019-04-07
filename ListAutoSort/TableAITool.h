#ifndef TABLEAITOOL_H
#define TABLEAITOOL_H

#include <QStringList>
#include <QRegExp>
#include <QMessageBox>
#include "FieldItem.h"

class TableAITool
{
public:
	TableAITool(QString m, QList<FieldItem>f);
	QStringList getResult();

private:
	void start();
	void init();
	void filter();
	void compareFields();
	void compareRegExp();
	void compareMissing();

private:
	QString mixture;
	QList<FieldItem>fields;
	int count;
	QStringList result;
	QList<bool>capture;
	QStringList infos;
};

#endif