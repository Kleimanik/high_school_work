#include<iostream>
#include<time.h>
#include<cstdlib>

using namespace std;

int main()
{
    int shot, shot_n, ary_p[15]={}, play_n=0;
    bool next_p;
    string name[15], next_pl;
    srand((int) time (0) );
    while(next_p)
    {
        play_n++;
        cout << "Zadaj meno hraca: ";
        cin >> name[play_n];
        cout << "Zadaj pocet striel: ";
        cin >> shot_n;
        for (int i=0; i<shot_n; i++)
        {
            shot = rand() % 11;
            cout << shot << endl;
            ary_p[play_n] += shot;
        }
        cout << "Chces pokracovat dalej? ano/nie   ";
        cin >> next_pl;
        if(next_pl != "ano")
        {
            next_p = false;
        }
    }
    int menu=0;
    while(menu!=4)
    {
        cout << "Menu:" << endl;
        cout << "1 vypis" << endl << "2 vitaz" << endl << "3 DNF" << endl << "4 end" << endl;
        cin >> menu;
        if (menu==1)
        {
            cout << "Meno     Body" << endl;
            for (int i=0; i<play_n; i++)
            {
                cout << ary_p[i] << "     " << name[i] << endl;
            }
        }
        else
        {
            if (menu==2)
            {
                int win, win_n;
                for (int i=0; i<play_n; i++)
                {
                    ary_p[i]+=0; 
                }
            }
            else 
            {
                if (menu!=4)
                {
                    cout << "skus to znova" << endl;
                }
            }
        }
    }
}