#include <iostream>
using namespace std;

int main()
{

    long long num, sum = 0;
    cin >> num;

    if (num % 2 == 0)
    {
        sum = num / 2;
    }
    else
    {
        sum = ((num + 1) / 2) * (-1);
    }

    cout << sum << endl;

    return 0;
}