#include "runtimeinfo.h"


RuntimeInfo::RuntimeInfo()
{
    startup_timestamp = 0;
    is_initing = true;
    has_new_version = 0;

    initPath();
}



void RuntimeInfo::initPath()
{
#if defined(Q_OS_WIN32)
    APP_PATH = QCoreApplication::applicationDirPath();
#elif defined(Q_OS_ANDROID)
    APP_PATH = "/data/data/com.iwxyi.writerfly/";
#endif
    if (!APP_PATH.endsWith("/")) APP_PATH += "/";
    DATA_PATH = APP_PATH+"data/";

    ensureDirExist(DATA_PATH);
}
