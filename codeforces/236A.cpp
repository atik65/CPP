#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{

    string word;
    cin >> word;
    sort(word.begin(), word.end());

    int count = 0;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] != word[i + 1])
        {
            count++;
        }
    }

    if (count % 2 != 0)
    {
        cout << "IGNORE HIM!" << endl;
    }
    else
    {
        cout << "CHAT WITH HER!" << endl;
    }
    return 0;
}