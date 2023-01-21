#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int people;

    cin >> people;
    int *results = new int[people];

    for (int i = 0; i < people; i++)
    {
        cin >> results[i];
    }

    for (int i = 0; i < people; i++)
    {
        if (results[i] == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
    }

    cout << "EASY" << endl;
    return 0;
}