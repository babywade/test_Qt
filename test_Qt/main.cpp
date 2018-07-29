#include "test_Qt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_Qt w;
	w.show();
	return a.exec();
}
