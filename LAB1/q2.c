#include<stdio.h>
int main()
{   
    printf("Enter the size of the array \n");
    int size;
    scanf("%d",&size);
    int ar[size];
    int i=0;
    int secondmax=ar[0];
    int secondmaxp=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max=ar[0];
    int maxp=0;
    for(i=0;i<size;i++)
    {
        if(ar[i]>max)
        {
            secondmax=max;
            max=ar[i];
            maxp=i;
        }
        else(ar[i]>secondmax && ar[i]!=max)
        {
            secondmax=ar[i];
            secondmaxp=i;
        }
    }
    int maxsum=0;
    maxsum=max+secondmax;
    printf("The max sum is :- %d",maxsum);
}
    