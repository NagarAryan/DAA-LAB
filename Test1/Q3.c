#include <stdio.h>
int main()
{
    int ar[5];
    int max;
    int n = 5;
    scanf("%d", &ar[0]);
    scanf("%d", &ar[1]);
    scanf("%d", &ar[2]);
    scanf("%d", &ar[3]);
    scanf("%d", &ar[4]);
    max= max_element(ar, n,ar[n-1]);
    printf("%d",max);
    return 0;
    
}
int max_element(int ar[], int n,int x)
{
    int y = ar[n - 1];
    int x1=x;
    if (n == 0)
        return x;
    else
    {
        x = find_max(x, y);
        max_element(ar, n - 1,x);
    }
}
int find_max(int x, int y)
{
    return (x > y ? x : y);
}