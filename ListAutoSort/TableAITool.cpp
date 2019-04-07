#include "TableAITool.h"

QStringList TableAITool::analyzeMixture(QString mixture, QList<FieldItem> fields)
{
	int count = fields.size(); // 数量
	QStringList result;        // 返回结果

	// 替换文本中的 逗号、冒号、顿号
	mixture = mixture.replace(QRegExp("\\s+"), "\n");
	mixture = mixture.replace(QRegExp(QStringLiteral("[,，、。]")), "\n");
	QMessageBox::information(NULL, "replace", mixture);



	return result;
}
