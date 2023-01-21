#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> v;
    int size, time;
    string arrangement;
    cin >> size >> time;
    cin >> arrangement;

    for (int j = 1; j <= time; j++)
    {

        for (int i = 0; i < arrangement.size(); i++)
        {
            if (arrangement[i] == 'B')
            {
                v.push_back(i);
            }
        }

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != (size - 1))
            {
                char temp = arrangement[v[i] + 1];
                arrangement[v[i] + 1] = arrangement[v[i]];
                arrangement[v[i]] = temp;
            }
        }
        v.clear();
    }

    cout << arrangement << endl;

    return 0;
}