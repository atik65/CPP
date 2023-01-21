#include <iostream>

using namespace std;

int main()
{
    int numRow, numCol, move = 0;

    int matrix[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                numRow = i;
                numCol = j;
            }
        }
    }

    if (numRow > 2)
    {
        move += (numRow - 2);
    }

    if (numCol > 2)
    {
        move += (numCol - 2);
    }

    if (numRow < 2)
    {
        move += (2 - numRow);
    }

    if (numCol < 2)
    {
        move += (2 - numCol);
    }

    cout << move << endl;
}