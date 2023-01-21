#include <iostream>

using namespace std;

int main()
{

    int number, segments = 1;
    cin >> number;

    int magnets[number];

    for (int i = 0; i < number; i++)
    {
        cin >> magnets[i];
    }

    for (int i = 0; i < number - 1; i++)
    {
        if (magnets[i] == 10)
        {
            if (magnets[i + 1] == 1)
            {
                segments++;
            }
        }
        else if (magnets[i] == 1)
        {
            if (magnets[i + 1] == 10)
            {
                segments++;
            }
        }
    }

    cout << segments << endl;

    return 0;
}