#pragma once

#include "GeneratorXcodeBase.h"

class GeneratorXcodeTVOS : public GeneratorXcodeBase
{
public:
    GeneratorXcodeTVOS();

    QMap<QString,QString>   getConditions() const;
    QString                 getRootFolderName() const { return QString::fromUtf8( "xcode_tvos" ); }

    QList<QString>          getSdks() const override { return mSdks; }
protected:
    QList<QString>  mSdks;
};
