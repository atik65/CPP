#include <iostream>

using namespace std;

int main()
{

    int testCase;
    int vaule = 0;
    string statement;
    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {
        cin >> statement;

        if (statement[0] == '+')
        {
            vaule++;
        }
        else if (statement[1] == '-')
        {
            vaule--;
        }
        else if (statement[0] == 'X')
        {
            vaule++;
        }
        else if (statement[0] == '-')
        {
            vaule--;
        }
    }

    cout << vaule << endl;
}