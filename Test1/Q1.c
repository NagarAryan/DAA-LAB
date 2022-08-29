#include <stdio.h>
int main()
{
    printf("Enter the size of the array :\n");
    int n;
    scanf("%d\n",&n);
    int ar[n];
    for (int i = 0; i < n; ++i)
    {
        scanf("%d\n", &ar[i]);
    }
    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product = product * (ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        ar[i] = product / (ar[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }
}
