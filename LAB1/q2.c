#include <stdio.h>
int main()
{
    printf("Enter the size of the array and the enter the elements of the array\n");
    int size;
    scanf("%d", &size);
    int ar[size];
    int i = 0;
    for (i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
    int max = ar[0];
    int secondmax = ar[0];
    for (i = 0; i < size; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
        if (ar[i] = !max && ar[i] > secondmax)
        {
            secondmax = ar[i];
        }
    }
    int maxsum = 0;
    maxsum = max + secondmax;
    printf("The max sum is :- %d", maxsum);
}