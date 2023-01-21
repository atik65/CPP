#include <iostream>

using namespace std;

int testLucky(long long n)
{
    int count = 0;
    while (n != 0)
    {
        if (((n % 10) == 7) || ((n % 10) == 4))
        {

            count++;
        }

        n = n / 10;
    }

    return count;
}

int main()
{

    long long num;
    cin >> num;

    if ((testLucky(num) == 4) || testLucky(num) == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}