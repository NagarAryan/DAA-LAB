#include <stdio.h>
int main()
{
    int i;
    printf("Enter the size of the array:-");
    scanf("%d", &i);
    int ar[i];
    printf("Enter the elements of the array:-");
    for (int j = 0; j < i; j++)
    {
        scanf("%d", &ar[j]);
    }
    
    return 0;
}