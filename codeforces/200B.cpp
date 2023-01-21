#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int jars;
    double orange_juice = 0;
    cin >> jars;
    // scanf("%lf", &jars);

    int juices[jars];

    for (int i = 0; i < jars; i++)
    {
        cin >> juices[i];
    }

    for (int i = 0; i < jars; i++)
    {
        orange_juice += double(juices[i]) / 100.00;
    }

    cout << (orange_juice / double(jars)) * 100.00 << endl;

    return 0;
}