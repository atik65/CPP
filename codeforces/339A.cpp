#include <iostream>

using namespace std;

int main()
{

    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i += 2)
    {
        for (int j = 0; j < input.size(); j += 2)
        {
            if (input[i] < input[j])
            {
                char temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    cout << input;

    return 0;
}