#include <QWidget>
#include <QApplication>
#include <QLineEdit>
#include <QSpinBox>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	w.setFixedSize(500, 500);

	QLineEdit edit1(&w);
	edit1.setGeometry(50, 50, 100, 20);
	edit1.setStyleSheet("color:blue;"
		"background-color:yellow;"
		"selection-color:yellow; "
		"selection-background-color:blue");

	w.show();

	return app.exec();
}