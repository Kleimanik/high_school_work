#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a=0, b=0, c=0, d=0;

    while (a!='k' && a!='K')
    {
        b++;
        cout << "Zadaj " << b << " cislo: ";
        cin >> d;
        cout << "Ak chces skoncit zadaj k, ak nie tak hocco ine." << endl;
        a=getch();
        c=c+d;
    }
    cout << "Sucet cisiel je: " << c << endl;
    cout << "Priemer cisiel je: " << c/b << endl;
    return 0;
}