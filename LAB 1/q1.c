#include <stdio.h>
int main()
{
    printf("Enter the size of the array \n");
    int size;
    int flag = 0;
    scanf("%d", &size);
    int ar[size];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    int element;
    printf("Enter the number you want to find out in the array\n");
    scanf("%d", &element);
    for (i = 0; i < size; i++)
    {
        if (ar[i] == element)
        {
            flag = 1;
            i = i + 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Element found at postion : %d", i);
    }
    else
    {
        printf("Element not found\n");
    }
    return 0;
}