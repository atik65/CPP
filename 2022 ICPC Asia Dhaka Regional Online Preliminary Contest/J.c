#include <stdio.h>

int main()
{
    int n, k, t, sum = 0;
    printf("Enter the number of PQA working in a single line: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("Enter the time taken by the %d PQA to check a product: ", i);
        scanf("%d", &t);
        sum += t;
    }
    printf("Enter the number of products to be verified: ");
    scanf("%d", &k);
    printf("The total time taken to verify the first %d products is: %d minutes\n", k, sum * k);
    return 0;
}
