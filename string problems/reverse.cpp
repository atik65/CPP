#include <iostream>
#include <string>
using namespace std;

string reverse(string word)
{

    string copy_word = word;
    int index = 0;

    for (int i = copy_word.length() - 1; i >= 0; i--)
    {

        word[index] = copy_word[i];
        index++;
    }

    return word;
}

int main()
{

    string word;
    getline(cin, word);
    word = reverse(word);
    cout << word;

    return 0;
}