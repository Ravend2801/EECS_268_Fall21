#include "Executive.h"
#include "Browser.h"
#include "fstream"
#include <iostream>
#include <string>
using namespace std;

Executive::Executive(char *FileName)
{
    this->FileName = FileName;
}

void Executive::run()
{
    inFile.open(FileName);
    string command, url;
    if (inFile.is_open())
    {   
        Browser newBrowser;
        while (!inFile.eof())
        {
           
            try
            {
                inFile >> command;

                if (command == "NAVIGATE")
                {
                    inFile >> url;
                    newBrowser.navigateTo(url);                    
                }
                else if (command == "FORWARD")
                {
                    newBrowser.forward();
                }
                else if (command == "BACK")
                {
                    newBrowser.back();
                }
                else if (command == "HISTORY")
                {
                    newBrowser.copyCurrentHistory();
                    cout<<'\n';
                }
            }
            catch (runtime_error &e)
            {
                cout << e.what() << '\n';
            }
        }
        inFile.close();
    }
    else
    {
        cout << "Cannot open file.";
    }
}
