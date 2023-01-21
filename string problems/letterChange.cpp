// Write a C++ program to change every letter in a given string with the letter following it in the alphabet (ie. a becomes b, p becomes q, z becomes a).
// Sample Input: w3resource
// Sample Output: x3sftpvsdf

#include <iostream>
#include <string>
using namespace std;

string letterChange(string word)
{
    string copyWord = word;

    for (int i = 0; i < copyWord.length(); i++)
    {

        if (copyWord[i] >= 'a' && copyWord[i] < 'z')
        {
            word[i] = copyWord[i] + 1;
        }
        else if (copyWord[i] == 'z')
        {
            word[i] = 'a';
        }
        else
        {
            word[i] = copyWord[i];
        }
    }

    return word;
}

int main()
{

    string word;
    getline(cin, word);

    cout << letterChange(word);

    return 0;
}