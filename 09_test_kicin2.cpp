#include<iostream>

using namespace std;

int main()
{
    int p;
    cout << "1-obsah" << endl;
    cout << "2-obvod" << endl;
    cout << "Zadaj znamy parameter: ";
    cin >> p;
    if(p==1)
    {
        int V;
        cout << "Zadaj hodnotu obsahu";
        cin >> V;
        int s;
        int a;
        int b;
        cout << "1-a" << endl;
        cout << "2-b" << endl;
        cout << "Zadaj znamu stranu:";
        cin >> s;
        if (s==1)
        {
            cout << "Zadaj dlzku strany a: ";
            cin >> a;
            b=V/a;
            cout << "Dlzka strany b je: " << b << endl;
        }
        else
        {
            cout << "Zadaj dlzku strany b: ";
            cin >> b;
            a=V/b;
            cout << "Dlzka strany a je: " << a << endl;
        }
    }
    else
    {
        if(p==2)
        {
            int O;
            cout << "Zadaj hodnotu obvodu";
            cin >> O;
            int s;
            int a;
            int b;
            cout << "1-a" << endl;
            cout << "2-b" << endl;
            cout << "Zadaj znamu stranu:";
            cin >> s;
            if (s==1)
            {
                cout << "Zadaj dlzku strany a: ";
                cin >> a;
                b=O-2*a;
                b=b/2;
                cout << "Dlzka strany b je: " << b << endl;
            }
            else
            {
                cout << "Zadaj dlzku strany b: ";
                cin >> b;
                a=O-2*b;
                a=a/2;
                cout << "Dlzka strany a je: " << a << endl;
            }
        }
        else
        {
            cout << "Zle zadany parameter." << endl;
        }
        
    }
    
    return 0;
}