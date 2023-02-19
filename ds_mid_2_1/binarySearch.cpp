#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int size, int x)
{

    int left = 0;
    int right = size - 1;
    int mid = left + (right - left) / 2;

    while (left <= right)
    {

        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            right = mid - 1;
        }
        else if (arr[mid] < x)
        {
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    return -1;
}

int main()
{

    int testArr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    sort(testArr, testArr + 10);

    cout << binarySearch(testArr, 10, 500) << endl;

    return 0;
}