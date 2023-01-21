#include <iostream>

using namespace std;

int main()
{

    int dollar, banana, price, cost = 0;
    cin >> price >> dollar >> banana;

    for (int i = 1; i <= banana; i++)
    {

        cost += i * price;
    }

    if (cost > dollar)
    {
        cout << cost - dollar << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}