#include <iostream>
using namespace std;

int main()
{

    int rows, cols;
    string flag = "last";
    cin >> rows >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            if (i % 2 == 0)
            {
                if (flag == "last")
                {
                    if (j == cols)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
                else
                {
                    if (j == 1)
                    {
                        cout << "#";
                    }
                    else
                    {
                        cout << ".";
                    }
                }
            }
            else
            {
                cout << "#";
            }
        }
        cout << endl;

        if (i % 2 == 0)
        {
            if (flag == "last")
            {
                flag = "start";
            }
            else
            {
                flag = "last";
            }
        }
    }
    return 0;
}