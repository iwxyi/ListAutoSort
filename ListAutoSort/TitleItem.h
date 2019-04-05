#include <QString>
#include <QList>
#include "StringUtil.h"

class TitleItem
{
public:
	TitleItem()
	{
		name = "";
		pattern = "";
	}

	TitleItem(QString n, QString p)
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

	QString getName()
	{
		return name;
	}

	QString getPattern()
	{
		return pattern;
	}

	bool isMatch()
	{
		return canRegExp(name, pattern);
	}

private:
	QString name;
	QString pattern;
};