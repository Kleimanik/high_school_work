#include<iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int o;
    cout << "Zadaj prve cislo: ";
    cin >> a;
    cout << "Zadaj druhe cislo: ";
    cin >> b;
    cout << "1-sucet" << endl;
    cout << "2-rozdiel" << endl;
    cout << "3-sucin" << endl;
    cout << "4-podiel" << endl;
    cout << "Zvol operaciu: ";
    cin >> o;
    if(o==1)
    {
        cout << a << "+" <<  b << "=" << a+b << endl;
    }
    else
    {
        if(o==2)
        {
            cout << a << "-" <<  b << "=" << a-b << endl;
        }
        else
        {
            if(o==2)
            {
                cout << a << "*" <<  b << "=" << a*b << endl;
            }
            else
            {
                if(o==2)
                {
                    cout << a << "-" <<  b << "=" << a-b << endl;
                }
                else
                {
                    cout << "Chybne zadanie." << endl;
                }
            }
        }
    }
    return 0;
}