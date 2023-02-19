#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {

        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[10] = {2, 4, 150, 10, 45, 3, 7, 55, 15, 14};

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    bubbleSort(arr, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}