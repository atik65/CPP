#include <iostream>
#include <string>

using namespace std;

int main()
{

    int count;
    string word;
    cin >> count;

    for (int i = 1; i <= count; i++)
    {
        cin >> word;

        if (word.length() <= 10)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0];
            cout << word.length() - 2;
            cout << word[(int)(word.length() - 1)] << endl;
        }
    }

    return 0;
}