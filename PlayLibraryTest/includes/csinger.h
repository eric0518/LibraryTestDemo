﻿#ifndef CSINGER_H
#define CSINGER_H

#include <QObject>
#include "playlibrary_global.h"

class CPLAYLIBRARYSHARED_EXPORT CSinger : public QObject
{
    Q_OBJECT
public:
    explicit CSinger(QObject *parent = 0);
    enum SongCategory { Classical, Pop, Blues, RockAndRoll, Jazz, Orchestral, Contemporary, Unkonwn };

public slots:
    void startSing(SongCategory);
    SongCategory songCategory();

private:
    SongCategory m_songCategory;
};

#endif // CSINGER_H
