#include <iostream>

using namespace std;

int main()
{

    int t, n;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {

        cin >> n;

        if (n >= 80 && n <= 100)
        {
            cout << "A+" << endl;
        }
        else if (n >= 75 && n <= 79)
        {
            cout << "A" << endl;
        }
        else if (n >= 70 && n <= 74)
        {
            cout << "A-" << endl;
        }
        else if (n >= 65 && n <= 69)
        {
            cout << "B+" << endl;
        }
        else if (n >= 60 && n <= 64)
        {
            cout << "B" << endl;
        }
        else if (n >= 55 && n <= 59)
        {
            cout << "B-" << endl;
        }
        else if (n >= 50 && n <= 54)
        {
            cout << "C+" << endl;
        }
        else if (n >= 45 && n <= 49)
        {
            cout << "C" << endl;
        }
        else if (n >= 40 && n <= 44)
        {
            cout << "D" << endl;
        }
        else if (n >= 0 && n <= 39)
        {
            cout << "F" << endl;
        }
    }

    return 0;
}