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

	//QPushButton btn(&w);
	//QChar c = QChar(0xf11b);
	////btn.setFont(fluentFont);
	//btn.setText(QString(QChar(0xe702)));


	QPixmap pix(30, 30);
	pix.fill(Qt::transparent);
	//设置画笔
	QPainter painter;
	painter.begin(&pix);
	//消除按钮按下的效果
	painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
	//设置画笔颜色
	painter.setPen(QColor("blue"));
	//设置刷子颜色
	painter.setBrush(QColor("blue"));
	//设置图形大小，这个大小主要取决与icon大小，icon设置的比较小，这个设置再大也没用
	fluentFont.setPointSize(10);
	painter.setFont(fluentFont);
	//画图形字体
	painter.drawText(pix.rect(), Qt::AlignCenter, QChar(0xe712));
	painter.end();

	pix.save("tmp.png");

	w.show();

	return app.exec();

	return 0;
}