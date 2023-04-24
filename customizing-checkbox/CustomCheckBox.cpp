#include "CustomCheckBox.h"
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

CustomCheckBox::CustomCheckBox(QWidget* p /*= nullptr*/) : QCheckBox(p)
{
	setStyleSheet(loadStyleSheet("../stylesheet/check-box.qss"));
}
