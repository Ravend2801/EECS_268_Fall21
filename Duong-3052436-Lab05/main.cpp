#include <iostream>
#include "Executive.h"
using namespace std;

int main (int argc, char** argv)
{
    if (argc > 1) 
    {
        Executive exec(argv[1]);
        exec.run();
    }
    else
        cout << "ERROR!" << '\n';
    return 0;
}
