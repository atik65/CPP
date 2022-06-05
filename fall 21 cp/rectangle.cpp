
#include <iostream>
using namespace std;

bool RecCheck(int a, int b, int c, int d)
{

    if (a == b == c == d)
        return true;

    else if (a == b && c == d)
        return true;
    else if (a == d && c == b)
        return true;
    else if (a == c && d == b)
        return true;
    else
        return false;
};

int main()
{

    int testCase, a, b, c, d;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> a >> b >> c >> d;
        if (RecCheck(a, b, c, d))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}