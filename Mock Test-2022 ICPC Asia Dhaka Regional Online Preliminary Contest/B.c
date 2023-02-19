#include <stdio.h>
int main()
{
    int t, i, m, n, k;
    scanf("%d", &t);

    for (i = 1; i <= t; i++)
    {
        scanf("%d %d %d", &m, &n, &k);
        int cost = n * k;
        if (cost <= m)
        {
            printf("Case %d: Yes\n", i);
        }
        else
        {
            printf("Case %d: No\n", i);
        }
    }
    return 0;
}