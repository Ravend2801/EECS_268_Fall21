/* -----------------------------------------------------------------------------
 *
 * File Name:  Executive.h
 * Author: Raven Duong
 * Assignment:   EECS-268 Lab 10
 * Description:  This program will run the program.
 * Date Last modified: 12/05/2021
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
    copy_Tree = nullptr;
    m_PokeTree = new BST<Pokemon>();
}

void Executive::run()
{
    read();
    int choice = 0;
    int BST_count = 1;
    int choose_BST = 1;
    if (choose_BST == 1)
    {
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
                int printID;
                cout << "Pokemon ID you want to print: ";
                cin >> printID;
                cout<<"Print number: "<<printID;
                try{
                    Pokemon temp = m_PokeTree->search(printID);
                    cout << "Your Pokemon: \n";
                    printPoke(temp);
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << '\n';
                }
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

            case 4:
            {
                if (BST_count < 2)
                {
                    copy_Tree = new BST<Pokemon>(*m_PokeTree);
                    
                    cout << "1. Interact with original BST.\n";
                    cout << "2. Interact with clone BST.\n";
                    cout<<"Choose your interaction: ";
                    cin >> choose_BST;
                    // cout << BST_count;
                    BST_count++;
                }
                else
                {
                    cout << "Unable to make a copy.";
                }
                break;
            }

            case 5:
            {
                int remove_key;
                cout << "Enter the pokedex to remove: ";
                cin >> remove_key;
                try
                {
                    Pokemon m_pokerm = m_PokeTree->search(remove_key);
                    m_PokeTree->remove(m_pokerm);
                    cout << " deleted.\n";
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << '\n';
                }
                break;
            }
            default:
            {
                break;
            }
            }
            cout << '\n';
        } while (choice != 6);
    }

    else if (choose_BST == 2)
    {
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
                    Pokemon poke = copy_Tree->search(key);
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
                    copy_Tree->add(add_poke);
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << endl;
                }

                break;
            }

            case 3:
            {
                int printID;
                cout << "Pokemon ID you want to print: ";
                cin >> printID;
                try
                {
                    Pokemon temp = copy_Tree->search(printID);
                    cout << "Your Pokemon: \n";
                    printPoke(temp);
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << '\n';
                }

                string order;
                cout << "Choose an order (Pre,In,Post): ";
                cin >> order;
                cout << "\n";
                if (order == "Pre")
                {
                    copy_Tree->visitPreOrder(printPoke);
                }
                else if (order == "In")
                {
                    copy_Tree->visitInOrder(printPoke);
                }
                else if (order == "Post")
                {
                    copy_Tree->visitPostOrder(printPoke);
                }
                cout << "\n";
                break;
            }

            case 4:
            {
                cout << "Unable to make a copy.";
                cout << "1. Interact with original BST.\n";
                cout << "2. Interact with clone BST.\n";
                cout<<"Choose your interaction: ";
                cin >> choose_BST;
                break;
            }

            case 5:
            {
                int remove_key;
                cout << "Enter the pokedex to remove: ";
                cin >> remove_key;
                try
                {
                    Pokemon m_pokerm = copy_Tree->search(remove_key);
                    copy_Tree->remove(m_pokerm);
                    cout << " deleted.\n";
                }
                catch (runtime_error &e)
                {
                    cout << e.what() << '\n';
                }
                break;
            }
            default:
            {
                break;
            }
            }
            cout << '\n';
        } while (choice != 6);
    }
    else
    {
        cout << "Wrong choice!\n";
    }
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
    cout << "4. Copy\n";
    cout << "5. Remove\n";
    cout << "6. Exit\n";
    cout << "Enter our choice: ";
}

void Executive::printPoke(Pokemon poke)
{
    cout << "American Name: " << poke.getUS() << "\n"
         << "Poke ID: " << poke.getID() << "\n"
         << "Japanese Name: " << poke.getJP() << "\n"
         << "\n";
}

Executive::~Executive()
{
    delete m_PokeTree;
    delete copy_Tree;
}
