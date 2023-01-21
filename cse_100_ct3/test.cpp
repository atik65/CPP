#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char paragraph[1000000];
    int words = 0;
    gets(paragraph);

    for (int i = 0; i < strlen(paragraph); i++)
    {
        if (paragraph[i] == " ")
        {
            words++;
        }
    }

    cout << words << endl;
    return 0;
}