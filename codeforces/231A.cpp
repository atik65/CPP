#include <iostream>

using namespace std;

int main()
{

    int problems, solvedPrb = 0;
    cin >> problems;

    for (int i = 1; i <= problems; i++)
    {
        int f1, f2, f3, solutionKnows = 0;
        cin >> f1 >> f2 >> f3;

        if (f1)
        {
            solutionKnows++;
        }
        if (f2)
        {
            solutionKnows++;
        }
        if (f3)
        {
            solutionKnows++;
        }

        if (solutionKnows >= 2)
        {
            solvedPrb++;
        }
    }

    cout << solvedPrb << endl;
}