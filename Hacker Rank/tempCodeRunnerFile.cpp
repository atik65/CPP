#include <iostream>

using namespace std;

int subArrayDivision(int *array, int, int, int);

int main()
{
    int array[101];
    int arrayLength, month, day;

    cin >> arrayLength;
    cout << endl;

    // taking array input
    for (int i = 0; i < arrayLength; i++)
    {
        cin >> array[i];
    }

    cin >> day >> month;

    int totalChocolateBar = subArrayDivision(array, month, day, arrayLength);
    cout << totalChocolateBar;

    return 0;
}

int subArrayDivision(int *array, int month, int day, int arrayLength)
{

    int chocolateBar = 0;

    for (int i = 0; i < arrayLength; i++)
    {
        int totalPortionLength = array[i];
        for (int j = 1; j < month; j++)
        {
            totalPortionLength += array[i + j];
        }

        if (totalPortionLength == day)
        {
            chocolateBar++;
        }
    }

    return chocolateBar;
}