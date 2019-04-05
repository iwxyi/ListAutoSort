#include <QString>
#include <QList>
#include "StringUtil.h"

class InfoItem
{
public:
	InfoItem()
	{
		title = "";
		pattern = "";
	}

	InfoItem(QString n, QString p)
	{
		title = n;
		pattern = p;
	}

	void setName(QString n)
	{
		title = n;
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
		return canRegExp(title, pattern);
	}

public:
	QString title;
	QString pattern;
};