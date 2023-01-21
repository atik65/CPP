#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int layer;
    cin >> layer;

    vector<string> v;

    for (int i = 1; i <= layer; i++)
    {
        if (layer % 2 == 0)
        {

            if (i == layer)
            {
                v.push_back("I love it");
            }
            else
            {
                if (i % 2 == 0)
                {
                    v.push_back("I love that ");
                }
                else
                {
                    v.push_back("I hate that ");
                }
            }
        }
        else
        {

            if (i == layer)
            {
                v.push_back("I hate it");
            }
            else
            {
                if (i % 2 == 0)
                {
                    v.push_back("I love that ");
                }
                else
                {
                    v.push_back("I hate that ");
                }
            }
        }
    }

    for (string s : v)
    {
        cout << s;
    }

    cout << endl;

    return 0;
}