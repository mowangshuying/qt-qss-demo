#include <QWidget>
#include <QApplication>
#include <QFontDatabase>
#include <QPushButton>
#include <QPainter>

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	// ��������ļ�
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
	//���û���
	QPainter painter;
	painter.begin(&pix);
	//������ť���µ�Ч��
	painter.setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
	//���û�����ɫ
	painter.setPen(QColor("blue"));
	//����ˢ����ɫ
	painter.setBrush(QColor("blue"));
	//����ͼ�δ�С�������С��Ҫȡ����icon��С��icon���õıȽ�С����������ٴ�Ҳû��
	fluentFont.setPointSize(10);
	painter.setFont(fluentFont);
	//��ͼ������
	painter.drawText(pix.rect(), Qt::AlignCenter, QChar(0xe712));
	painter.end();

	pix.save("tmp.png");

	w.show();

	return app.exec();

	return 0;
}