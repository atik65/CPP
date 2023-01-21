#include <iostream>
#include <string>

using namespace std;

int main()
{
    int count = 0;
    string word1, word2;
    getline(cin, word1);
    getline(cin, word2);

    for (int i = 0; i <= word1.length() - word2.length(); i++)
    {
        int flag = 1;

        for (int j = 0; j < word2.length(); j++)
        {

            if (word1[i + j] != word2[j])
            {
                flag = 0;
            }
        }

        if (flag == 1)
        {
            count++;
            break;
        }
    }

    // if (flag == 0)
    // {
    //     cout << "Not Found";
    // }
    return 0;
}