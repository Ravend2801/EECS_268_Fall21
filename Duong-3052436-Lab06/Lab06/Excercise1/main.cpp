/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 6
 * @brief This program will that takes a sequence of parenthesis from the command line. 
 * Your program will indicate whether or not it's a balanced set of parenthesis
 * @date 10/25/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include<iostream>
#include<string>

const char *par(const char *balance)
{
    if(*balance == '\0' || *balance == ')')
    {
        return (balance);
    }
    if(*balance == '(')
    {
        const char *c = par(++balance);
        if(*c == ')')
        {
            return (par(++c));
        }
        return(balance - 1);
    }
    return (par(++balance));
}

int main(int argc, char *argv[])
{
    std::string data = par(argv[1]);
    int check = data.length();
    if( check == 0)
    {
        std::cout << "The sequence " << argv[1] << " is balanced" << '\n';
    }
    else
    {
        std::cout << "The sequence " << argv[1] << " is not balanced" << '\n';
    }

    return(0);
}
