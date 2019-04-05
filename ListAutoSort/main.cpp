#include "ListAutoSort.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ListAutoSort w;
	w.show();
	return a.exec();
}
