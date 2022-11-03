#include "Game.h"

void Game::setName(string gameName)
{
    m_name=gameName;
}

string Game::getName()
{
    return m_name;
}

void Game::setGibbonsRating(double rating)
{
    m_pr=rating;
}

double Game::getGibbonsRating()
{
    return m_gr;
}

void Game::setPublicRating( double rating)
{
    m_pr=rating;
}

double Game::getPublicRating()
{
    return m_pr;
}

void Game::setYearPublish(int year)
{
    m_year=year;
}
int Game::getYearPublish()
{
    return m_year;
}

void Game::setMinPlayer( int playernum)
{
    m_minP=playernum;
}

int Game::getMinPlayert()
{
    return m_minP;
}

void Game::setPlayTime(double Playtime)
{
    m_playT=Playtime;
}

double Game::getPlayTime()
{
    return m_playT;
}
