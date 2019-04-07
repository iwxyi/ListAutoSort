#ifndef FIELDITEM_H
#define FIELDITEM_H

#include <QString>
#include <QList>
#include "StringUtil.h"

class FieldItem
{
public:
	FieldItem()
	{
		name = "";
		pattern = "";
	}

	FieldItem(QString n, QString p)
	{
		name = n;
		pattern = p;
	}

	void setName(QString n)
	{
		name = n;
	}

	QString getName()
	{
		return name;
	}

	void setPattern(QString p)
	{
		/*if (!p.startsWith("^"))
			p = "^" + p;
		if (!p.endsWith("$"))
			p = p + "$";*/
		pattern = p;
	}

	QString getPattern()
	{
		return pattern;
	}

	bool isMatch()
	{
		return canRegExp(name, pattern);
	}

public:
	QString name;
	QString pattern;
};

#endif