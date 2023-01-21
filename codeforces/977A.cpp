#include <iostream>

using namespace std;

int main()
{
    int number, times;
    cin >> number >> times;

    for (int i = 1; i <= times; i++)
    {
        if ((number % 10) != 0)
        {
            number--;
        }
        else
        {
            number = number / 10;
        }
    }

    cout << number << endl;

    return 0;
}