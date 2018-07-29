#ifndef PLAYLIBRARY_H
#define PLAYLIBRARY_H

#include "playlibrary_global.h"
#include "cdirector.h"
#include "csinger.h"

class CPLAYLIBRARYSHARED_EXPORT CPlayLibrary
{

public:
    CPlayLibrary();

public:
    void directorStart();
    CDirector::PlayState directorState();

    void singerStart();
    CSinger::SongCategory songCategory();

private:
    CDirector *m_director;
    CSinger *m_singer;
};

#endif // PLAYLIBRARY_H
