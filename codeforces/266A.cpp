#include <iostream>

using namespace std;

int main()
{
    int size;
    string stones;

    cin >> size;
    cin >> stones;

    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (stones[i] == stones[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}