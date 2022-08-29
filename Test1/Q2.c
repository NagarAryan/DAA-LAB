#include <stdio.h>
int main()
{
    printf("Enter the nth number:\n");
    int n;
    scanf("%d", &n);
    int number;
    int a = 0, b = 1, c = 1;
    number = FindRecursive(a, b, c, n);
    printf("The nth fibonacci number is :%d", number);
    return 0;
}
int FindRecursive(int a, int b, int c, int n)
{
    while (c <= n)
    {
        if (n == 1)
            return 0;
        else
        {
            if (c == n)
                return a;
            return (FindRecursive(b, a + b, c + 1, n));
        }
    }
}