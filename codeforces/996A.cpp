#include <iostream>
using namespace std;

int main()
{
    long long n, count = 0;

    cin >> n;
    while (n > 0)
    {
        if (n >= 100)
        {
            count += (n / 100);
            n = n % 100;
        }
        else if (n >= 20)
        {
            count += (n / 20);
            n = n % 20;
        }
        else if (n >= 10)
        {
            count += (n / 10);
            n = n % 10;
        }
        else if (n >= 5)
        {
            count += (n / 5);
            n = n % 5;
        }
        else if (n >= 1)
        {
            count += (n / 1);
            n = n % 1;
        }
    }

    cout << count << endl;
    return 0;
}