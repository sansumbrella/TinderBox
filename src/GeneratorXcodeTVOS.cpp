#include "GeneratorXcodeTVOS.h"

GeneratorXcodeTVOS::GeneratorXcodeTVOS()
    : GeneratorXcodeBase()
{
    mSdks.push_back( QString("device") );
    mSdks.push_back( QString("simulator") );
}

QMap<QString,QString> GeneratorXcodeTVOS::getConditions() const
{
    QMap<QString,QString> conditions;
    conditions["compiler"] = "xcode";
    conditions["os"] = "tvos";
    conditions["sdk"] = "*";
    return conditions;
}
