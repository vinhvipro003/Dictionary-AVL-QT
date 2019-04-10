#include "DictionaryGUI.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	DictionaryGUI w;
	w.setWindowTitle("Dictionary");
	w.show();
	return a.exec();
}
