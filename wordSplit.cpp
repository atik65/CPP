

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {

//     string name;
//     string part;
//     getline(cin, name);

//     for (int i = 0; i < name.length(); i++)
//     {
//         if (name[i] == 32)
//         {
//             cout << endl;
//         }
//         else
//         {
//             cout << name[i];
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string name;
    string part;
    getline(cin, name);

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == 32)
        {
            // cout << endl;
            part.append(" \n");
        }
        else
        {
            part.push_back(name[i]);
            // cout << name[i];
        }
    }

    cout << part;
    return 0;
}