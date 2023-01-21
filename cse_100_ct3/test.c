#include <stdio.h>

int main()
{

    char text[500];
    int i = 0, total = 1;

    gets(text);

    while (text[i] != '\0')
    {

        if (text[i] == ' ')
        {
            total++;
        }

        i++;
    }

    printf("%d\n", total);
    return 0;
}