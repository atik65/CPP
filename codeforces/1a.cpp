#include <iostream>

using namespace std;

int main()
{

    int m, n, a;
    cin >> m >> n >> a;

    long long e = m / a;
    long long f = n / a;

    if (m % a != 0)
    {
        e++;
    }

    if (n % a != 0)
    {
        f++;
    }
    long long int sum = e * f;
    cout << sum << endl;

    return 0;
}