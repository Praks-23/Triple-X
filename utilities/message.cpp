#include <iostream>
#include <ctime>
using namespace std;

void outputMessage1()
{
    int i = 0;
    while (i < 95)
    {
        cout << "*";
        i += 1;
    }
    i = 0;
    cout << "\n\nYou are breaking into the 99th Precinct's Criminal Database Server To get your criminal records\n\n";
    while (i < 95)
    {
        cout << "*";
        i += 1;
    }
}

void outputMessage2()
{
    cout << "\n*******************************\nHURRAY!! YOU GOT ALL YOUR FILES\n*******************************\n";
}