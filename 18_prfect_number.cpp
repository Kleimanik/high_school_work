#include <iostream>

using namespace std;

int main()
{
    int end_n = 0, sum = 0;
    cout << "Zadaj koncove cislo: ";
    cin >> end_n;
    for (int i=1; i<=end_n; i++)
    {
        int sum_d = 0;
        for (int j=1; j<=i; j++)
        {
            if (i%j==0)
                sum_d += j;
        }
        if (sum_d==2*i)
            sum++;
    }
    cout << "Pocet perfectnych cisiel je: " << sum << endl;
}