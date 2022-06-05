#include <iostream>
using namespace std;

int divisblePairCounter(int *array, int, int);

int main()
{
    int array[101];
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    int totalPair = divisblePairCounter(array, k, n);
    cout << totalPair;

    return 0;
}

int divisblePairCounter(int *array, int k, int n)
{
    int totalPair = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((array[i] + array[j]) % k == 0)
            {
                totalPair++;
            }
        }
    }

    return totalPair;
}