#include <iostream>
using namespace std;

int main()
{

    int testCase, n, m, k;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> n >> m >> k;
        if (n <= (m - k))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}