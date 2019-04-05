#ifndef USETTINGS_H
#define USETTINGS_H

#include "settings.h"
#include <QColor>

/**
 * 程序总设置类
 */
class USettings : public Settings
{
public:

    USettings(QString filePath);

    void init();
    void loadFromFile();

public:
    bool is_debug;                   // 调试模式

};


#endif // USETTINGS_H
