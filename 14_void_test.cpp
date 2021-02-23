#include <cstdlib>
#include <iostream>

using namespace std;

void dvojicky (int ary[10], int n)
{
    int pocet=0;
    for (int i=1; i<n; i++)
    {
        if (ary[i]==ary[i-1])
        {
            pocet++;
        }
    }
    cout << "Pocet dvojiciek je " << pocet << endl;
}

void vypis (int ary[10],int n)
{
    for (int i=0; i<n; i++)
    {
        cout << ary[i] << " ";
    }
    cout << endl;
}

int main ()
{
    int n=10;
    int pole[n];
    cout << "Zadaj prvky pola: " << endl;
    for (int i=0; i<n; i++)
    {
        cout << i+1 << ". cislo: ";
        cin >> pole[i];
    }
    dvojicky (pole, n);
    vypis (pole, n);
    return 0;
}