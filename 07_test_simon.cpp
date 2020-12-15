#include<iostream>

using namespace std;

int main()
{
    cout << "Zadaj volbu: " << endl << "1-valec" << endl << "2-kvader" << endl;
    int volba;
    cin >> volba;
    if(volba==1)
    {
        int polomer, vyska, objem, povrch;
        cout << "Zadaj polomer podstavy valca: ";
        cin >> polomer;
        cout << "Zadaj vysku valca: ";
        cin >> vyska;
        objem = 3.14*polomer*polomer;
        povrch = 2*3.14*polomer+2*3.14*polomer*polomer;
        cout << "Objem valca je: " << objem << endl;
        cout << "Povrch valca je: " << povrch << endl;
    }
    else
    {
        if (volba==2)
        {
            int a, b, c, objem, povrch;
            cout << "Zadaj stranu a: ";
            cin >> a;
            cout << "Zadaj stranu b: ";
            cin >> b;
            cout << "Zadaj stranu c: ";
            cin >> c;
            objem = a*b*c;
            povrch = 2*a*b+2*b*c+2*c*a;
            cout << "Objem kvadra je: " << objem << endl;
            cout << "Povrch kvadra je: " << povrch << endl;
        }
        else
        {
            cout << "Zle zadanie." << endl;
        }
    }
    return 0;
}