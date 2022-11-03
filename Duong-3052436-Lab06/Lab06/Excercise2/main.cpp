/** -----------------------------------------------------------------------------
 *
 * @file  main.cpp
 * @author Raven Duong
 * @KUID: 3052436
 * @Assignment:   EECS-268 Lab 6
 * @brief This program will ask the user for what day they want a count of people with the flu for. 
 * Then display the amount then use recursion to solve the calculation of infected for a given day. 
 * Assume the user will input a valid day.
 * @date 10/25/21
 *
 ---------------------------------------------------------------------------- **/
//Start your program.

#include<iostream>

int flu(int num)
{
    if(num == 1)
    {
        return (1);
    }
    if(num == 2)
    {
        return(8);
    }
    if( num == 3)
    {
        return(22);
    }
    return(flu(num - 1) + flu(num - 2) + flu(num - 3));
}

int main()
{
    int number;
    std::cout << "OUTBREAK!" << '\n';
    std::cout << "What day do you want a sick count for?: ";
    std::cin >> number; 
    if(number == 0)
    {
        std::cout << "Invalid day" << '\n';
    }
    else
    {
        std:: cout << "Total people with flu: " << flu(number) << '\n';
    }
    return(0);
}


