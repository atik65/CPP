#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 32)
        {
            cout << endl;
        }
        else
        {
            cout << name[i];
        }
    }

    return 0;
}