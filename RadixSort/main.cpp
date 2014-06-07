#include "radixsort.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	RadixSort w;
	w.show();
	return a.exec();
}
