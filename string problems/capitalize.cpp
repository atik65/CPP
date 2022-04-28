// Write a C++ program to capitalize the first letter of each word of a given string. Words must be separated by only one space.
// Example:
// Sample Input: cpp string exercises
// Sample Output: Cpp String Exercises

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string capitalize(string sentence)
{

    string copySentence = sentence;

    for (int i = 0; i < copySentence.length(); i++)
    {
        if (copySentence[i] >= 'a' && copySentence[i] <= 'z')
        {
            if (i == 0)
            {
                // sentence[i] = copySentence[i] - ('a' - 'A');
                sentence[i] = toupper(copySentence[i]);
            }
            else if (copySentence[i - 1] == ' ')
            {
                // sentence[i] = copySentence[i] - ('a' - 'A');
                sentence[i] = toupper(copySentence[i]);
            }
        }
        else
        {
            sentence[i] = copySentence[i];
        }
    }

    return sentence;
}

int main()
{

    string sentence;
    getline(cin, sentence);

    cout << capitalize(sentence);

    return 0;
}