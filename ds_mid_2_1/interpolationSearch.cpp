#include <iostream>
#include <algorithm>
using namespace std;

int interpolationSearch(int arr[], int size, int x)
{
    int left = 0;
    int right = size - 1;

    int pos = left + ((right - left) * (x - arr[left])) / (arr[right] - arr[left]);

    while (left <= right)
    {

        if (arr[pos] == x)
        {
            return pos;
        }
        else if (arr[pos] > x)
        {
            right = pos - 1;
        }
        else if (arr[pos] < x)
        {
            left = pos + 1;
        }

        pos = left + ((right - left) * (x - arr[left])) / (arr[right] - arr[left]);
    }

    return -1;
}

int main()
{
    int testArr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    sort(testArr, testArr + 10);

    cout << interpolationSearch(testArr, 10, 50) << endl;
    return 0;
}