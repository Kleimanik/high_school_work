#include <cstdlib>
#include <conio.h>
#include <iostream>
#include <time.h>

void vypis_pole(int ary[12],int n)
{
    for (int i=0; i<n; i++)
    {
        std::cout << ary[i] << std::endl;
    }
}

void nahodne_pole(int ary[12],int n)
{
    for (int i=0; i<n; i++)
        ary[i] = rand() %21;
    vypis_pole(ary, n);
}

void max_pola(int ary[12],int n)
{
    int maximum = ary[0], poz = 0;
    for (int i=0; i<n; i++)
    {
        if (maximum < ary[i])
        {
            maximum = ary[i];
            poz=i;
        }
    }
    std::cout << "Maximum pola je " << maximum << std::endl;
    std::cout << "Toto maximum sa nachadza na pozicii " << poz << std::endl;
    vypis_pole(ary, n);
}

void avridge(int ary[12],int n)
{
    int avg=0;
    for (int i=0; i<n; i++)
    {
        avg += ary[i];
    }
    std::cout << "Priemer je " << double (avg/n) << std::endl;
}

int main()
{
    char menu;
    bool end=true;
    int ea=12;
    int cis[ea];
    while (end)
    {
        std::cout << "Zvol si jedno: v - vypis pola" << std::endl;
        std::cout << "               z - zadaj pole" << std::endl;
        std::cout << "               m - maximum pola" << std::endl;
        std::cout << "               a - priemer pola" << std::endl;
        std::cout << "               ESC - koniec" << std::endl;
        menu = getch();
        switch (menu)
        {
            case 'a': avridge(cis, ea); break;
            case 'v': vypis_pole(cis, ea); break;
            case 'z': nahodne_pole(cis, ea); break;
            case 'm': max_pola(cis, ea); break;
            case 27: end = false; break;
            default:;
        }
    }
    return 0;
}