#include "TableAITool.h"

TableAITool::TableAITool(QString m, QList<FieldItem>f) : mixture(m), fields(f)
{
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
	for (int i = 0; i < count; i++)
	{
		result << "";          // 先初始化成空的
		capture.append(false);
	}
}

/**
 * 替换文本中的 逗号、冒号、顿号
 */
void TableAITool::filter()
{
	mixture = mixture.replace(QRegExp(QStringLiteral("[:,：，。、\\s]+")), "\n");
	//QMessageBox::information(NULL, "replace", mixture);
	infos = mixture.split("\n", QString::SplitBehavior::SkipEmptyParts);
}

/**
 * 比较：字段名一模一样的
 */
void TableAITool::compareFields()
{
	for (int i = 0; i < fields.size(); i++)
	{
		for (int j = 0; j < infos.size(); j++)
		{
			if (fields[i].getName() == infos[j])
			{

			}
		}
	}
}

/**
 * 比较：正则表达式匹配的
 */
void TableAITool::compareRegExp()
{

}

/*
 *比较：剩余没有匹配的*/
void TableAITool::compareMissing()
{

}

QStringList TableAITool::getResult()
{
	return result;
}