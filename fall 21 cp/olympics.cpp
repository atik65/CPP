#include <iostream>
using namespace std;

int main()
{

    int testCase, g1, g2, b1, b2, s1, s2;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> g1 >> s1 >> b1 >> g2 >> s2 >> b2;
        if ((g1 + s1 + b1) > (g2 + s2 + b2))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}