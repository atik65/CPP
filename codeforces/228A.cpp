#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;

    int num, count = 0;

    for (int i = 0; i < 4; i++)
    {
        cin >> num;

        v.push_back(num);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++)
    {
        if (v[i] == v[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}