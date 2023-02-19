#include <iostream>

using namespace std;

int main()
{

    int n, max, min, count = 0;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            count++;
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            count++;
            min = arr[i];
        }
    }

    cout << count << endl;

    return 0;
}