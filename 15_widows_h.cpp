#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <conio.h>
#include <time.h>

using namespace std;

int main()
{
    char run='s';
    int x, y;
    x=rand()% 100;
    y=rand()% 6;
    y++;
    while (run!=27)
    {
        for (int i=0; i<y; i++)
            cout << endl;
        for (int i=0; i<x; i++)
            cout << " ";
        cout << "*";
        run = getch();
        if(run=='w')
            y--;
        else
        {
            if (run=='s')
                y++;
            else
            {
                if (run=='a')
                    x--;
                else
                {
                    if(run=='d')
                        x++;
                }
            }
        system("cls");
        }
    }
}
