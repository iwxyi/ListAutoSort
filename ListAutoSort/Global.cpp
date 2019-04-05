
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
