#include "TableAITool.h"

TableAITool::TableAITool(QString m, QList<FieldItem>f) : mixture(m), fields(f) // （QList传参是深拷贝，不怕）
{
	start();
}

void TableAITool::start()
{
	init();
	filter();

	compareFields();
	compareRegExp();
	compareMissing();
}

/**
 * 初始化变量
 */
void TableAITool::init()
{
	for (int i = 0; i < fields.size(); i++)
	{
		result << "";          // 先初始化成空的
		captured.append(false);
	}
}

/**
 * 替换文本中的 逗号、冒号、顿号
 */
void TableAITool::filter()
{
	mixture = mixture.replace(QRegExp(QStringLiteral("[:,：，。、\\s]+")), "\n");
	//QMessageBox::information(NULL, "replace", mixture);
	qDebug() << QStringLiteral("替换后的文本：") << mixture;
	infos = mixture.split("\n", QString::SplitBehavior::SkipEmptyParts);
	qDebug() << QStringLiteral("分割后的长度：") << infos.size();
}

/**
 * 比较：字段名一模一样的
 */
void TableAITool::compareFields()
{
	QList<int>same; // same 与 infos 等长
	for (int i = 0; i < infos.size(); i++)
		same << -1;

	// 比较每个字段和每条信息的字符串
	for (int i = 0; i < fields.size(); i++) // 遍历字段
	{
		for (int j = 0; j < infos.size(); j++) // 遍历信息
		{
			if (fields[i].getName() == infos[j])
			{
				same[j] = i;
			}
		}
	}

	// 这一条一样，且下一条不一样（避免连续字段错乱）
	for (int i = 0; i < infos.size()-1; i++)
	{
		// 这个字段匹配了，加入 i+1，删除 i 以及 i+1
		if (same[i] > -1 && same[i + 1] == -1)
		{
			int index = same[i]; // 对应字段的索引
			qDebug() << QStringLiteral("匹配：") << fields[index].getName() << "  " << infos[i + 1];
			if (captured[index]) // 重复匹配了……
				continue;
			result[index] = infos[i + 1];
			captured[index] = true;
		}
	}

	// 删除已经匹配的（倒序删除）
	for (int i = infos.size() - 1; i >= 0; i--)
	{
		// 删除这两条
		if (same[i] > -1 && same[i + 1] == -1)
		{
			infos.removeAt(i + 1);
			infos.removeAt(i);
		}
	}
}

/**
 * 比较：正则表达式匹配的
 */
void TableAITool::compareRegExp()
{
	QList<IndexConnection>ics;

	// 检测所有单个匹配的
	bool find = true;
	int index = 0;
	while (find)
	{
		if (index >= fields.size())
			break;
		if (captured[index] || fields[index].getPattern().isEmpty())
		{
			index++;
			continue;
		}

		// 寻找所有能匹配的信息，以及第一个匹配的位置
		int count = 0, place = -1;
		for (int i = 0; i < infos.size(); i++)
			if (canMatch(infos[i], fields[index].getPattern()))
			{
				count++;
				if (place == -1)
					place = i;
			}

		// 有且仅有这一个能匹配
		if (count == 1)
		{
			result[index] = infos[place];
			qDebug() << QStringLiteral("正则匹配到：") << fields[index].getName() << "    " << infos[place] << "    " << fields[index].getPattern();
			infos.removeAt(place);  // 匹配后删除
			captured[index] = true; // 这个字段匹配了
			index = 0;              // 从头开始计算
		}
		else
		{
			index++;                // 没有匹配，继续尝试下一个
		}
	}
}

/*
 *比较：剩余没有匹配的*/
void TableAITool::compareMissing()
{

}

bool TableAITool::canMatch(QString str, QString reg)
{
	return QRegExp(reg).indexIn(str) > -1;
}

QStringList TableAITool::getResult()
{
	return result;
}

QString TableAITool::getResultString()
{
	QString msg = "";
	for (int i = 0; i < result.size(); i++)
	{
		if (i > 0) msg += ", ";
		msg += result[i];
	}
	return msg;
}
