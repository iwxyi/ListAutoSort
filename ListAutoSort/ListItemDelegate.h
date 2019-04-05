#ifndef LISTITEMDELEGATE_H
#define LISTITEMDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>
#include <QItemDelegate>
#include <QModelIndex>
#include <QPainter>
#include <QWidget>
#include <QLineEdit>
#include <QRect>
#include <QMessageBox>

class ListItemDelegate : public QItemDelegate
{
	Q_OBJECT
public:
	ListItemDelegate(QObject* parent = nullptr)
	{

	}

	void setModelData(QWidget* editor, QAbstractItemModel* model, const QModelIndex &index) const
	{
		QLineEdit* edit = static_cast<QLineEdit*>(editor);
		QString str = edit->text();
		int row = index.row();
		emit signalTextModified(row, str);
		return QItemDelegate::setModelData(editor, model, index);
	}

signals:
	void signalTextModified(int row, QString text) const; // 因为 setModelData 的 const，所以也必须要设置为 const

};

#endif
