#include <iostream>

using namespace std;

int main()
{

    int n, p, q;

    cin >> n;
    int n_arr[n] = {0};

    cin >> p;
    int p_arr[p];

    for (int i = 0; i < p; i++)
    {
        cin >> p_arr[i];
    }

    cin >> q;
    int q_arr[q];

    for (int i = 0; i < q; i++)
    {
        cin >> q_arr[i];
    }

    for (int i = 0; i < p; i++)
    {
        n_arr[p_arr[i] - 1]++;
    }

    for (int i = 0; i < q; i++)
    {
        n_arr[q_arr[i] - 1]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (n_arr[i] == 0)
        {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }

    cout << "I become the guy." << endl;

    return 0;
}