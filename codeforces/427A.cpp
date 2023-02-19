#include <iostream>

using namespace std;

int main()
{

    int n, police = 0;
    int untracked = 0;
    cin >> n;

    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            police += arr[i];
        }
        else if (police > 0 && arr[i] < 0)
        {
            police--;
        }
        else if (police <= 0 && arr[i] < 0)
        {
            untracked++;
        }
    }

    cout << untracked << endl;

    return 0;
}