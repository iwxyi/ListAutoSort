#include <QString>
#include <QList>
#include "StringUtil.h"

class InfoItem
{
public:
	InfoItem()
	{
		name = "";
		pattern = "";
	}

	InfoItem(QString n, QString p)
	{
		name = n;
		pattern = p;
	}

	void setName(QString n)
	{
		name = n;
	}

	void setPattern(QString p)
	{
		if (!p.startsWith("^"))
			p = "^" + p;
		if (!p.endsWith("$"))
			p = p + "$";
	}

	bool isMatch()
	{
		return canRegExp(name, pattern);
	}

public:
	QString name;
	QString pattern;
};