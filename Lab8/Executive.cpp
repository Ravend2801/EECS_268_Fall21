/* -----------------------------------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Raven Duong
 * KU ID: 3052436
 * Assignment:   EECS-268 Lab 08
 * Description:  This program will time various methods from the data structures.
 * Date Last modified: 11/16/2021
 *
 ---------------------------------------------------------------------------- */
#include "Executive.h"
#include <time.h>
#include <math.h>
#include <cstdlib>
#include <fstream>

Executive::Executive()
{
    myStack1 = new Stack<int>();
    myStack2 = new Stack<int>();
    myQueue = new Queue<int>();
    myList1 = new LinkedList<int>();
    myList2 = new LinkedList<int>();
    myList3 = new LinkedList<int>();
}

void Executive::run()
{
    StackPop();
    StackDestructor();
    QueueEnqueue();
    LinkedListEntry1();
    LinkedListEntryLast();
    LinkedListPrint();
}

void Executive::StackPop()
{
    ofstream OutFile;
    OutFile.open("Clock_StackPop.csv");
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        for (int i = 0; i < 1000; i++)
        {
            myStack1->push(1);
        }
        clock_t t;
        t = clock();
        myStack1->pop();
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n';
        myStack1->push(1);
    }
    OutFile.close();
}

void Executive::StackDestructor()
{
    ofstream OutFile;
    OutFile.open("Clock_StackDestructor.csv");
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        for (int i = 0; i < n; i++)
        {
            myStack2->push(1);
        }
        clock_t t;
        t = clock();
        for (int i = 0; i < n; i++)
        {
            myStack2->pop();
        }
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n';
    }
    OutFile.close();
}

void Executive::QueueEnqueue()
{
    ofstream OutFile;
    OutFile.open("Clock_QueueEnqueue.csv"); 
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        clock_t t;
        t = clock();
        for (int i = 0; i < 1000; i++)
        {
            myQueue->enqueue(1);
        }
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n';
    }
  
    OutFile.close();
}

void Executive::LinkedListEntry1()
{
    ofstream OutFile;
    OutFile.open("Clock_LinkedListEntry1.csv");
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        clock_t t;
        for (int i = 0; i < 1000; i++)
        {
            myList1->insert(1, 1);
        }
        t = clock();
        myList1->getEntry(1);
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n';
    }
    OutFile.close();
}

void Executive::LinkedListEntryLast()
{
    ofstream OutFile;
    OutFile.open("Clock_LinkedListEntryLast.csv");
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        clock_t t;
        for (int i = 0; i < 1000; i++)
        {
            myList2->insert(1, 1);
        }
        t = clock();
        myList2->getEntry(n);
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n'; 
    }
    OutFile.close();
}

void Executive::LinkedListPrint()
{
    ofstream OutFile;
    OutFile.open("Clock_LinkedListPrint.csv");
    OutFile << "size, clock: \n";
    for (int n=1000;n<=100000;n=n+1000)
    {
        clock_t t;
        for (int i = 0; i < 1000; i++)
        {
            myList3->insert(1, 1);
        }
        t = clock();
        cout << n << "\n";
        for (int i = 0; i < n; i++)
        {
            myList3->getEntry(i + 1);
        }
        t = clock() - t;
        OutFile << n << "," << ((float)t) / CLOCKS_PER_SEC << '\n';

    }
    OutFile.close();
}

Executive::~Executive()
{
    delete myStack1;
    delete myStack2;
    delete myQueue;
    delete myList1;
    delete myList2;
    delete myList3;
}
