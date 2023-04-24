#include <QWidget>
#include <QFile>
#include <QApplication>
#include <QTextEdit>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	w.setFixedSize(500, 500);
	w.setObjectName("w");

	// …Ë÷√±≥æ∞Õº∆¨
	QTextEdit textEdit(&w);
	textEdit.setGeometry(50, 50, 400, 400);
	textEdit.setStyleSheet("background-color:white;background-image: url(bg.png);background-attachment: fixed; ");

	//w.setWindowFlags(Qt::WindowDoesNotAcceptFocus);
	w.setEnabled(false);

	w.show();

	return app.exec();
}