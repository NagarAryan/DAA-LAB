#include <stdio.h>
int brute(int a, int n)
{
    int res = a;
    if (n == 1)
        return a;
    for (int i = 2; i <= n; i++)
    {
        res = res * a;
    }
    return res;
}
int DaC(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return DaC(a, n / 2) * DaC(a, n / 2);
    }
    else
    {
        return a * DaC(a, n / 2) * DaC(a, n / 2);
    }
}
int main()
{
    int a, n;
    printf("Enter the element\n");
    scanf("%d", &a);
    printf("Enter the element\n");
    scanf("%d", &n);
    int result1, result2;
    result1 = brute(a, n);
    result2 = DaC(a, n);
    printf("The power using brute force method is: %d ", result1);
    printf("The power using Divide and Conquer method is: %d ", result2);
    return 0;
}