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
