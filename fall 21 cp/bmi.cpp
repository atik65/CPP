#include <iostream>
using namespace std;

int main()
{

    int testCase, mass;
    double height;

    cin >> testCase;

    for (int i = 1; i <= testCase; i++)
    {

        cin >> mass >> height;
        double bmi = mass / (height * height);

        if (bmi <= 18)
        {
            cout << 1 << endl;
        }
        else if (bmi >= 18 && bmi <= 24)
        {
            cout << 2 << endl;
        }
        else if (bmi >= 25 && bmi <= 29)
        {
            cout << 3 << endl;
        }
        else if (bmi >= 30)
        {
            cout << 4 << endl;
        }
    }

    return 0;
}