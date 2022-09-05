#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}
void tabularOutput()
{
    printf("Sl no.\t\tn\t\tTime Complexity\n");
    int count = 1;
    for (int i = 5000; i <= 50000; i += 5000)
    {
        int *arr = (int *)malloc(i * sizeof(int));
        for (int j = 0; j < i; j++)
        {
            arr[j] = rand() % i;
        }
        clock_t t1 = clock();
        heapSort(arr, i);
        t1 = clock() - t1;
        printf("%d\t\t%d\t\t%0.2f\n", count, i, (double)t1);
        count++;
    }
    
}
void tabularOutput2()
{
    printf("Sl no.\t\tn\t\tTime Complexity\n");
    int count = 1;
    for (int i = 5000; i <= 50000; i += 5000)
    {
        int *arr = (int *)malloc(i * sizeof(int));
        for (int j = 0; j < i; j++)
        {
            arr[j] = rand() % i;
        }
        bubbleSort(arr, i);
        clock_t t1 = clock();
        heapSort(arr, i);
        t1 = clock() - t1;
        printf("%d\t\t%d\t\t%0.2f\n", count, i, (double)t1);
        count++;
    }
}
int main()
{
    tabularOutput();
    tabularOutput2();
    return 0;
}
