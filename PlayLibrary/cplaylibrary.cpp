#include "cplaylibrary.h"


CPlayLibrary::CPlayLibrary()
{
    m_director = new CDirector();
    m_singer = new CSinger();
}


// public:
void CPlayLibrary::directorStart()
{
    m_director->startPlay();
}

CDirector::PlayState CPlayLibrary::directorState()
{
    return m_director->playState();
}

void CPlayLibrary::singerStart()
{
    m_singer->startSing(CSinger::Blues);
}

CSinger::SongCategory CPlayLibrary::songCategory()
{
    return m_singer->songCategory();
}
