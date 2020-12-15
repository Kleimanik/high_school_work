#include<iostream>

using namespace std;

int main()
{
    int cislo1, cislo2, operacia;
    cout << "Zadaj prve cislo: ";
    cin >> cislo1;
    cout << "Zadaj druhe cislo: ";
    cin >> cislo2;
    cout << "Zadaj operaciu: " << endl << "1-sucet" << endl << "2-rozdiel" << endl << "3-sucin" << endl << "4-podiel" << endl;
    cin >> operacia;
    if(operacia==1)
    {
        cout << cislo1 << "+" <<  cislo2 << "=" << cislo1+cislo2 << endl;
    }
    else
    {
        if(operacia==2)
        {
            cout << cislo1 << "-" <<  cislo2 << "=" << cislo1-cislo2 << endl;
        }
        else
        {
            if(operacia==2)
            {
                cout << cislo1 << "*" <<  cislo2 << "=" << cislo1*cislo2 << endl;
            }
            else
            {
                if(operacia==2)
                {
                    cout << cislo1 << "-" <<  cislo2 << "=" << cislo1-cislo2 << endl;
                }
                else
                {
                    cout << "Zle zvolenie operacie." << endl;
                }
            }
        }
    }
    return 0;
}