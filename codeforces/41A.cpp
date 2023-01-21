#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    string first, second;

    cin >> first >> second;

    if (first.size() != second.size())
    {
        cout << "NO" << endl;
        return 0;
    }

    reverse(first.begin(), first.end());
    if (first == second)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}