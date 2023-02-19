#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int x)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }

    return -1;
}

int main()
{

    int testArr[10] = {10, 2, 0, 30, 4, 0, 50, 5, 60, 70};

    cout << linearSearch(testArr, 10, 50) << endl;

    return 0;
}