/**
 * 全局运行状态类
 */

#ifndef RUNTIMEINFO_H
#define RUNTIMEINFO_H

#include <QApplication>
#include <QWidget>
#include <QMessageBox>
#include <QObject>
#include "fileutil.h"
#include "defines.h"


class RuntimeInfo
{
public:
    RuntimeInfo();

    void initPath();

public:
    // ==== 路径 ====
    QString APP_PATH;   // 运行路径
    QString DATA_PATH;  // 数据总路径

    // ==== 运行 ====
    qint64 startup_timestamp; // 启动时间
    bool is_initing; // 初始化中
    int has_new_version;

    // ==== 统计 ====
    int USER_WORD; // 用户字数
    int USER_TIME; // 用户时间
    int USER_ADDI; // 额外积分
    int USER_LEVEL; // 用户等级

    // ==== 彩蛋 ====
    int NO_NOVEL_PROMPT_COUNT;  // 提示创建书籍次数，3次则提示
    bool is_line_guide;
    int line_guide_case;
    QWidget* guide_widget;
};


#endif // RUNTIMEINFO_H
