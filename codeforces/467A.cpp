#include <iostream>
using namespace std;

int main()
{
    int number_of_room, available_room = 0;
    cin >> number_of_room;

    int spaces[number_of_room][2];

    for (int i = 0; i < number_of_room; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> spaces[i][j];
        }
    }

    for (int i = 0; i < number_of_room; i++)
    {

        if ((spaces[i][1] - spaces[i][0]) >= 2)
        {
            available_room++;
        }
    }

    cout << available_room << endl;
    return 0;
}