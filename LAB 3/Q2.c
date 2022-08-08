#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    printf("Enter the value of a :-");
    scanf("%d", &a);
    printf("Enter the value of b :-");
    scanf("%d", &b);
    int r = 0;
    int gcd = EucGCD(a, b, r);
    printf("Euclid Algo %d\n", gcd);
    int gcd2 = IntGCD(a, b);
    printf("Integer Checking %d\n", gcd2);
}
int EucGCD(int a, int b, int r)
{
    while (b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int IntGCD(int a, int b)
{
    int temp = 0;
    int min = (a < b) ? a : b;
    int i;
    for (i = 1; i <= min; i++)
    {
        if (b%i == 0&&a%i==0)
        {
            temp = i;
        }
    }
    return temp;
}
