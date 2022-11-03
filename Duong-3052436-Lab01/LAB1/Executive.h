#ifndef EXECUTVE_H
#define EXECUTIVE_H
#include <iostream>
#include <fstream>
#include <string>
#include "Game.h"

using namespace std;

class Executive
{
    private: 
        int m_size;
        fstream infile; 
        Game* m_array; 

    public:
        Executive(string fileName);
        ~Executive();
        void PrintAllGames();
        void PrintGamesFromYear();
        void PrintRankingRange();
        void ThePeopleVSGibbons(); 
        void FindGame();
        void run();

}; 


#endif
