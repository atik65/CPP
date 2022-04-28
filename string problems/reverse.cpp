// Write a C++ program to reverse a given string.

#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string reverse_word(string word)
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
    string wordCopy = word;

    // word = reverse_word(word);
    reverse(wordCopy.begin(), wordCopy.end());

    cout << "Original word is = " << word << endl;
    cout << "Reversed Word is = " << wordCopy << endl;

    return 0;
}