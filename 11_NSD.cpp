#include <iostream>

int nsd(int a, int b) 
{
    while (a!=b)
    {
        if(a<b)
        {
            b=b-a;
        }
        else
        {
            a=a-b;
        }
    }
    return a;
}

int main()
{
    int frst_n, scnd_n;
    std::cout << "Zadaj prve cislo: ";
    std::cin >> frst_n;
    std::cout << "Zadaj druhe cislo: ";
    std::cin >> scnd_n;
    if (frst_n!=scnd_n)
    {
        std::cout << "Najmensi spolocny delitel je: " << nsd(scnd_n, frst_n) << std::endl;
    }
    else
    {
        std::cout << "Najmensi spolocny delitel je: " << frst_n << std::endl;
    }
    return 0;
}