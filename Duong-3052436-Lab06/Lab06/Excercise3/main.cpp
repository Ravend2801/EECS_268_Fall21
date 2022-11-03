/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 6
 * @brief This program will take an integer and a flag from the user.
 * @date 10/25/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.
#include <iostream> 
#include<string>

class fibo
{
    public:
    int fib(int n)
    {
        if (n <= 1)
        {
            return(n);
        }
        return(fib(n-1) + fib(n-2));
    }

    void fibonacci_check(int n)
    {
        if(n == 0 || n == 1)
        {
            std::cout << n << " is in the sequence.\n";
        }
        else
        {
            int a = 0;
            int b = 1;
            int c = a+b;
            while(c < n)
            {
                a = b;
                b = c;
                c = a+b;
            }
            if(c == n)
            {
                std::cout << n << " is in the sequence.\n";
            }
            else{
                std::cout << n << " is not in the sequence.\n";
            }
        }
    }
};

int main()
{
    fibo b;
    std::string flag;
    int i;
    std::cin >> flag >> i;
    if(flag == "-i")
    {
        std::cout << b.fib(i) << '\n';
    }
    else if(flag == "-v")
    {
        b.fibonacci_check(i);
    }
    else{
        std::cout << "Wrong flag.\n";
    }
    return(0);
}
