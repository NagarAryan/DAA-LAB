#include <stdio.h>
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arrF[], int arrS[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arrF[j] > arrF[j + 1])
            {
                swap(&arrF[j], &arrF[j + 1]);
                swap(&arrS[j], &arrS[j + 1]);
            }
        }
    }
}
void Activity(int start[], int finish[], int n)
{
    int i = 0;
    printf("%d ", i);
    int startTime = start[0];
    int finishTime = finish[0];
    for (int i = 1; i < n; i++)
    {
        if (start[i] >= finishTime)
        {
            printf("%d ", start[i]);
            finishTime = start[i];
        }
    }
}

int main()
{
    int n;
    printf("Enter the number of activities\n");
    scanf("%d", &n);
    int start[n], finish[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d", &start[i], &finish[i]);
    }
    bubbleSort(finish, start, n);
    Activity(start, finish, n);
}
// OUTPUT
/*
6
1 2
3 4
0 6
5 7
8 9
5 9
*/
// Test Driven Code -- only for testing

// int n=6;
// int start[]={1,3,0,5,8,5};
// int finish[]={2,4,6,7,9,9};
// bubbleSort(finish,start,n);
