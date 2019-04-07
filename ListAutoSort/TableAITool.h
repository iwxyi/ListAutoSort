#ifndef TABLEAITOOL_H
#define TABLEAITOOL_H

#include <QStringList>
#include <QDebug>
#include <QRegExp>
#include <QMessageBox>
#include "FieldItem.h"

class TableAITool
{
	struct IndexConnection
	{
		int field; // 字段索引
		int info;  // 信息索引
	};

public:
	TableAITool(QString m, QList<FieldItem>f);

	QStringList getResult();
	QString getResultString();

protected:
	void start();
	void init();
	void filter();
	void compareFields();
	void compareRegExp();
	void compareMissing();

private:
	bool canMatch(QString str, QString reg);

protected:
	QString mixture;        // 原文本（过滤后的）
	QList<FieldItem>fields; // 字段列表，名字+表达式
	int count;              // 字段数量
	QStringList infos;      // 分割后的每条信息
	QList<bool>capture;     // 是否已经匹配了
	QStringList result;     // 返回结果
};

#endif