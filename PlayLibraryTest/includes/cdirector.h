#ifndef CDIRECTOR_H
#define CDIRECTOR_H

#include <QObject>
#include "playlibrary_global.h"

class CPLAYLIBRARYSHARED_EXPORT CDirector : public QObject
{
    Q_OBJECT
public:
    explicit CDirector(QObject *parent = 0);
    enum PlayState { Started, Finished };

public slots:
    void startPlay();
    void finishPlay();
    PlayState playState();

private:
    PlayState m_playState;
};

#endif // CDIRECTOR_H
