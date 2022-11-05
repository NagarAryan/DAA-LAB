#include <stdio.h>
#include <time.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main()
{
    int n;
    printf("Enter the size of the array :\n");
    scanf("%d\n", &n);
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int x;
    printf("Enter the element to be searched");
    scanf("%d", &x);
    binarySearch(ar, 0, n - 1, x);  
    return 0;
}
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