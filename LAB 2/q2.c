#include <stdio.h>
#include <stdbool.h>
int main()
{
    int ar[5];
    printf("Enter the unsorted array \n");
    int i = 0;
    int n = 5;
    int flag = 0;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ar[i]);
    }
    int count = 0;
    int temp = 0;
    int j = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            flag = 1;
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
                flag = 0;
            }
            count++;
            temp = 0;
        }
        if (flag == 1)
            break;
    }
    printf("%d \n", count);
    printf("The sorted array is :");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", ar[i]);
    }
    return 0;
}