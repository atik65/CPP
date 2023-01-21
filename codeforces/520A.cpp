#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int alphabets;
    string sentence;
    cin >> alphabets;
    cin >> sentence;

    int count = 0;

    transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);
    sort(sentence.begin(), sentence.end());

    for (int i = 0; i < alphabets; i++)
    {
        if (sentence[i] != sentence[i + 1])
        {
            count++;
        }
    }

    if (count == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}