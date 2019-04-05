
#include <QString>
#include <QDebug>
#include <QApplication>
#include <QDateTime>
#include <QTime>
#include "settings.h"
#include "usettings.h"
#include "runtimeinfo.h"

QString APPLICATION_NAME = "ListAutoSort";
QString VERSION_NUMBER = "v1.0";

USettings* us;
RuntimeInfo* rt;

bool deb(QVariant str, QString name)
{
    qDebug() << "-------【" << name << "】-------";
    qDebug() << str.toString() << endl;
    return true;
}

bool deb(QVariant str)
{
    qDebug() << "------------------------";
    qDebug() << str.toString() << endl;
    return true;
}

void Log(QVariant str)
{
    if (us != nullptr && us->is_debug)
        deb(str);
}

QString Path(QString str)
{
    if (str.endsWith("/"))
        return rt->DATA_PATH + str;
    else
        return rt->DATA_PATH + str + "/";
}

void initGlobal()
{
    rt = new RuntimeInfo();
    us = new USettings(rt->DATA_PATH+"settings.ini");
}

void deleteGlobal()
{
    delete us;
}

/**
 * 毫秒级获取时间戳
 * @return 时间戳
 */
qint64 getTimestamp()
{
    return QDateTime::currentDateTime().toMSecsSinceEpoch();
}
