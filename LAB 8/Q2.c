#include <stdio.h>
void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void knapsack(int n, float weight[], float profit[], float capacity)
{
    float x[n], tp = 0;
    int i, j, u;
    u = capacity;

    for (i = 0; i < n; i++)
        x[i] = 0.0;

    for (i = 0; i < n; i++)
    {
        if (weight[i] > u)
            break;
        else
        {
            x[i] = 1.0;
            tp = tp + profit[i];
            u = u - weight[i];
        }
    }

    if (i < n)
        x[i] = u / weight[i];

    tp = tp + (x[i] * profit[i]);

    printf("\nThe result vector is:- ");
    for (i = 0; i < n; i++)
        printf("%f\t", x[i]);

    printf("\nMaximum profit is:- %0.01f", tp);
}

int main()
{
    int num;
    printf("\nEnter the no. of objects:- ");
    scanf("%d", &num);
    float weight[num], profit[num], capacity;
    int num, i, j;
    float ratio[num], temp;

    printf("\nEnter the wts and profits of each object:- ");
    for (i = 0; i < num; i++)
    {
        scanf("%f %f", &weight[i], &profit[i]);
    }

    printf("\nEnter the capacity of knapsack:- ");
    scanf("%f", &capacity);

    for (i = 0; i < num; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (i = 0; i < num; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (ratio[i] < ratio[j])
            {
                swap(ratio[i], ratio[j]);
                swap(weight[i], weight[j]);
                swap(profit[i], profit[j]);
            }
        }
    }

    knapsack(num, weight, profit, capacity);
    return (0);
}