#include <QWidget>
#include <QApplication>
#include <QLineEdit>
#include <QSpinBox>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	w.setFixedSize(500, 500);

	app.setStyleSheet("*[mandatoryField=\"true\"]{ background-color: yellow };");
	QLineEdit nameEdit(&w);
	nameEdit.setGeometry(50, 50, 100, 20);
	nameEdit.setProperty("mandatoryField", true);
	QLineEdit emailEdit(&w);
	emailEdit.setGeometry(50, 100, 100, 20);
	emailEdit.setProperty("mandatoryField", true);
	QSpinBox  ageSpinBox(&w);
	ageSpinBox.setProperty("mandatoryField", true);
	ageSpinBox.setGeometry(50, 150, 50, 20);


	w.show();

	return app.exec();
}