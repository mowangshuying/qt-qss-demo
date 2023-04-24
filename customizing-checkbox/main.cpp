#include <QWidget>
#include <QApplication>
#include <QColor>

#include "CustomCheckBox.h"

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	w.setFixedSize(500, 500);

	CustomCheckBox checkBox(&w);
	checkBox.setGeometry(50, 50, 100, 50);
	checkBox.setText("check it!");

	//QColor color = qRgba(0, 0, 0, 1);
	//QColor light = Qt::

	w.show();

	return app.exec();
}