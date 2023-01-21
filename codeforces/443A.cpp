#include <iostream>
#include <set>

using namespace std;

int main()
{

    string input_sentence;
    getline(cin, input_sentence);

    set<char> unique_characters;

    for (int i = 0; i < input_sentence.size(); i++)
    {
        if (input_sentence[i] >= 'A' && input_sentence[i] <= 'Z')
        {
            input_sentence[i] = tolower(input_sentence[i]);
        }

        if (input_sentence[i] >= 'a' && input_sentence[i] <= 'z')
        {
            unique_characters.insert(input_sentence[i]);
        }
    }

    cout << unique_characters.size() << endl;

    return 0;
}