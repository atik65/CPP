#include <iostream>

using namespace std;

int main()
{

    int n, k, nextRound = 0;
    cin >> n >> k;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    for (int j = 0; j < n; j++)
    {
        if (array[j] > 0)
        {
            if (array[j] >= array[k - 1])
            {
                nextRound++;
            }
        }
    }

    cout << nextRound << endl;
    return 0;
}