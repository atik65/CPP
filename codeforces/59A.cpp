#include <iostream>
#include <algorithm>

using namespace std;

bool testUpper(char x)
{
    return x >= 'A' && x <= 'Z';
}
bool testLower(char x)
{
    return x >= 'a' && x <= 'z';
}

int main()
{

    string word;
    int upperCase = 0, lowerCase = 0;
    cin >> word;

    upperCase = count_if(word.begin(), word.end(), testUpper);
    lowerCase = count_if(word.begin(), word.end(), testLower);

    if (upperCase > lowerCase)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] = word[i] - 32;
            }
        }
    }
    else if (lowerCase >= upperCase)
    {
        for (int i = 0; i < word.size(); i++)
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] = word[i] + 32;
            }
        }
    }

    cout << word << endl;

    return 0;
}