#include <iostream>

using namespace std;

int main()
{

    int testCase, number, sum;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        sum = 0;

        cin >> number;

        for (int j = 1; j <= number; j++)
        {

            if (j % 2 != 0)
            {
                sum += j;
            }
        }

        cout << sum << endl;
    }

    return 0;
}