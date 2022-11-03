#ifndef EXECUTIVE_H
#define EXECUTIVE_H

#include<iostream>
#include<fstream>
#include<cstring>

#include "Browser.h"
using namespace std;

class Executive
{
private:
    
    char *FileName;
    Browser* newBrowser;
public:
    ifstream inFile;
    void run();
    Executive(char *FileName);
    
};

#endif
