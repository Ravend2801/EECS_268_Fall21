#include <iostream>
#include "Executive.h"
#include <limits>

using namespace std;

int main(int argc, char* argv[])
{

    if(argc < 2)
    {
        cout << "Incorrect number of paramenter!\n";

    }
    else
    {
        Executive exec(argv[1]);
        exec.run();
    }
    
    return(0);
}
