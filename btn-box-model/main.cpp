#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QFile>

QString loadStyleSheet(const QString& styleFileName)
{
	QString qssStr;
	QFile qss(styleFileName);
	if (qss.open(QFile::ReadOnly))
	{
		qssStr = qss.readAll();
		qss.close();
	}
	return qssStr;
}

int main(int argc, char** argv)
{
	QApplication app(argc, argv);

	QWidget w;
	w.setFixedSize(500, 500);
	w.setObjectName("w");
	//w.setStyleSheet("QWidget#w{background-color:white;}");

	QPushButton evilBtn(&w);
	evilBtn.setObjectName("evilBtn");
	evilBtn.setGeometry(50, 50, 65, 30);

	w.show();

	app.setStyleSheet(loadStyleSheet("../stylesheet/btn-box-model.qss"));

	return app.exec();
}