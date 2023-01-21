#include <iostream>
using namespace std;

int main()
{
    int friends, a;
    cin >> friends;

    int result[friends];

    for (int i = 0; i < friends; i++)
    {
        cin >> a;

        result[a - 1] = i + 1;
    }

    for (int i = 0; i < friends; i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}