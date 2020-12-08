#include <time.h>
#include <iostream>
#include <cstdlib>

using namespace std;


int main()
{
    int ary[10]={1,1,1,1,1,1,1,1,1,1}, i=0;
    double avg=0;
    while ((ary[i]!=0) and (i<9))
    {
        i++;
        ary[i] = rand() % 10;
        cout << ary[i] << endl;
        avg += ary[i];
    }
    avg = avg/i;
    cout << "Priemer je: " << avg << endl;
    for (int j=1;j<i;j++)
    {
        cout << j << ". Hodina bude odpovedat " << ary[j] << " ziak." << endl;
    }
    int j=0,dead=0;
    cout << "Zadaj mrtveho hraca: ";
    cin >> dead;
    for (j=dead ; j<i ; j++)
    {
        ary[j] = ary[j+1];
    }
    ary[j+1]=0;
    for (j=1;j<i;j++)
    {
        cout << ary[j] << endl;
    }
    return 0;
}