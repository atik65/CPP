#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string flag = "yes";
    string guest, host, total;
    cin >> guest >> host >> total;

    string all = guest + host;

    sort(all.begin(), all.end());
    sort(total.begin(), total.end());

    if (all == total)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}