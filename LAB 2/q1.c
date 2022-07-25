#include <stdio.h>
int main()
{
    int ar[5];
    printf("Enter the unsorted array \n");
    int i = 0;
    int n = 5;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count;
    int temp = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
            temp = 0;
            count++;
        }
    }
    printf("%d \n", count);
    printf("The sorted array is :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}