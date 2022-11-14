#include <stdio.h>
void printBool(int n, int len)
{

    while (n)
    {
        if (n & 1)
            printf("1 ");
        else
            printf("0 ");

        n >>= 1;
        len--;
    }
    while (len)
    {
        printf("0 ");
        len--;
    }
    printf("\n");
}
void printSubsetsCount(int set[], int n, int val)
{
    int sum;
    int count = 0;
    for (int i = 0; i < (1 << n); i++)
    {
        sum = 0;
        for (int j = 0; j < n; j++)
            if ((i & (1 << j)) > 0)
            {
                sum += set[j];
            }
        if (sum == val)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("No subset is found");
    }
    else
    {
        printf("%d", count);
    }
}
void main()
{
    int set[] = {1, 2, 3, 4, 5};
    printSubsetsCount(set, 5, 9);
}
