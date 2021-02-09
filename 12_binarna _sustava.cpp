#include <cstdlib>

void vypocet (int num, int sus)
{
    bool end = true;
    int i=0, arr[100];
    while (end)
    {
        if (num=0) end=false;

        arr[i]=num%sus;
        num = num/sus;
        i++;
    }
    std::cout << "vysledok je: ";
    for ( i=i-1; i>-1; i--)
    {
        switch (arr[i])
        {
            case 10: std::cout << "A"; break;
            case 11: std::cout << "B"; break;
            case 12: std::cout << "C"; break;
            case 13: std::cout << "D"; break;
            case 14: std::cout << "E"; break;
            case 15: std::cout << "F"; break;
            default: std::cout << arr[i];
        }
    }
}

int main()
{
    int cislo, sustava;
    std::cout << "zadaj cislo: ";
    std::cin >> cislo;
    std::cout << "zadaj sustavu";
    std::cin >> sustava;
    vypocet(cislo; sustava);
    return 0;
}