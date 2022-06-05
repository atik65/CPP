#include <iostream>
using namespace std;

int main()
{

    int testCase, x, y, z;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> x >> y >> z;
        cout << x * y * z << endl;
    }

    return 0;
}