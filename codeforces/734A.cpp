#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int games;
    string results;
    int A, D;

    cin >> games;
    cin >> results;

    A = count(results.begin(), results.end(), 'A');
    D = count(results.begin(), results.end(), 'D');

    if (A > D)
    {
        cout << "Anton" << endl;
    }
    else if (D > A)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}