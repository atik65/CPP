#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_min_index(vector<int> v, int n)
{

    int index = 0;
    int min = v[0];
    for (int i = 0; i < n; i++)
    {
        if (v[i] <= min)
        {
            min = v[i];
            index = i;
        }
    }

    return index;
}

int main()
{

    int n, value, count = 0;
    vector<int> v;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> value;
        v.push_back(value);
    }

    int maxElementIndex = std::max_element(v.begin(), v.end()) - v.begin();
    int minElementIndex = find_min_index(v, n);

    if (minElementIndex < maxElementIndex)
    {
        minElementIndex++;
    }

    count += maxElementIndex - 0;
    count += (n - 1) - minElementIndex;

    cout << count << endl;
    return 0;
}