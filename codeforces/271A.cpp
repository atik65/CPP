#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool nice_year(int year)
{
    vector<int> v;

    for (int i = 0; i < 4; i++)
    {
        v.push_back(year % 10);
        year = year / 10;
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
    {
        if (v[i] == v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int year;
    cin >> year;

    while (!nice_year(year + 1))
    {

        year++;
    }

    cout << year + 1 << endl;

    return 0;
}