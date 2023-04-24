#include <QWidget>
#include <QApplication>
#include <QFontDatabase>
#include <QPushButton>
#include <QPainter>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	// 添加字体文件
	int fontId = QFontDatabase::addApplicationFont("./Segoe_Fluent_Icons.ttf");
	QStringList fontFamilies = QFontDatabase::applicationFontFamilies(fontId);
	QFont fluentFont;
	fluentFont.setFamily(fontFamilies.at(0));

	QApplication::setFont(fluentFont);

	QWidget w;
	QPushButton btn(&w);

	QChar c = QChar(0xf11b);
	//btn.setFont(fluentFont);
	btn.setText(QString(QChar(0xe702)));

	//btn.setText("Btn");

	w.show();

	return app.exec();

	return 0;
}