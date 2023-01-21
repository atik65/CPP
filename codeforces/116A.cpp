#include <iostream>

using namespace std;

int main()
{

    int points;
    cin >> points;

    int stations[points][2];

    for (int i = 0; i < points; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> stations[i][j];
        }
    }

    // for (int i = 0; i < points; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         cout << stations[i][j];
    //     }
    // }

    int now = stations[0][0] + stations[0][1];
    int max = now;

    for (int i = 1; i < points; i++)
    {
        now = (now - stations[i][0]) + stations[i][1];

        if (now > max)
        {
            max = now;
        }
    }

    cout << max << endl;

    return 0;
}