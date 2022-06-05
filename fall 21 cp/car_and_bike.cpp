#include <iostream>
using namespace std;

int main()
{

    int testCase, bike, car;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> bike >> car;
        cout << (bike * 2) + (car * 4) << endl;
    }

    return 0;
}