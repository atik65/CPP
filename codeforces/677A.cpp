#include <iostream>

using namespace std;

int main()
{

    int total_boy, height, width = 0;
    cin >> total_boy >> height;

    int *all_heights = new int[total_boy];

    for (int i = 0; i < total_boy; i++)
    {
        cin >> all_heights[i];
    }

    for (int i = 0; i < total_boy; i++)
    {
        if (all_heights[i] <= height)
            width++;
        else
        {
            width += 2;
        }
    }

    cout << width << endl;
    return 0;
}