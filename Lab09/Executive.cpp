/* -----------------------------------------------------------------------------
 *
 * File Name:  Executive.cpp
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will run the program.
 * Date Last modified: 11/30/2021
 *
 ---------------------------------------------------------------------------- */

#include "Executive.h"
#include <time.h>
#include <math.h>
#include <cstdlib>
#include <fstream>
using namespace std;

Executive::Executive(string FileName)
{
    this->FileName = FileName;
    m_PokeTree = new BST<Pokemon>();
}

void Executive::run()
{
    read();
    int choice = 0;
    do
    {
        printMenu();
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            int key;
            cout << "Your Pokemon ID: ";
            cin >> key;
            try
            {
                Pokemon poke = m_PokeTree->search(key);
                cout << "Pokemon exists.\n";
                printPoke(poke);
            }
            catch (runtime_error &e)
            {
                cout << e.what() << endl;
            }
            break;
        }

        case 2:
        {
            int addID;
            string addUS;
            string addJP;
            cout << "Enter Pokemon ID: \n";
            cin >> addID;
            cout << "Enter Pokemon's American Name: \n";
            cin >> addUS;
            cout << "Enter Pokemon's Japanese Name: \n";
            cin >> addJP;
            Pokemon add_poke = Pokemon(addID, addUS, addJP);
            
                try
                {
                    m_PokeTree->add(add_poke);
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << endl;
                }
            
            break;
        }

        case 3:
        {
            string order;
            cout << "Choose an order (Pre,In,Post): ";
            cin >> order;
            cout << "\n";
            if (order == "Pre")
            {
                m_PokeTree->visitPreOrder(printPoke);
            }
            else if (order == "In")
            {
                m_PokeTree->visitInOrder(printPoke);
            }
            else if (order == "Post")
            {
                m_PokeTree->visitPostOrder(printPoke);
            }
            cout << "\n";
            break;
        }
        default:
        {
            break;
        }
        }
        cout<<'\n';
    } while (choice != 4);
    
}

void Executive::read()
{
    int tempID;
    string tempUS;
    string tempJP;
    fstream InFile;
    InFile.open(this->FileName);
    while (!InFile.eof())
    {
        InFile >> tempUS >> tempID >> tempJP;
        Pokemon m_poke = Pokemon(tempID, tempUS, tempJP);
        try
        {
            m_PokeTree->add(m_poke);
        }
        catch (runtime_error &e)
        {
            cout << e.what() << endl;
        }
    }
}

void Executive::printMenu()
{
    cout << "1. Search\n";
    cout << "2. Add\n";
    cout << "3. Print\n";
    cout << "4. Exit\n";
    cout << "Enter our choice: ";
}

void Executive::printPoke(Pokemon poke)
{
    cout <<"American Name: "<< poke.getUS() << "\n" <<"Poke ID: "<< poke.getID() << "\n" <<"Japanese Name: "<< poke.getJP() << "\n"<<"\n";
}

Executive::~Executive()
{
    delete m_PokeTree;
}
