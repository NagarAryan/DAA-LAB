

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSortAsc(long int arr[], long int n)
{
    long int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;


        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
void insertionSortDsc(long int arr[], long int n)
{
    long int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

       
        while (j >= 0 && arr[j] < key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}


int main()
{
    long int n = 5000;
    int it = 0;

    double tim1[10], tim2[10], tim3[10];

    printf("A_size, Random, Best, Worst\n");

    while (it++ < 10)
    {
        long int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
            {
            long int no = rand() % n + 1;
            a[i] = no;
            b[i] = no;
            c[i] = no;
        }

        insertionSortAsc(b, n);
        insertionSortDsc(c, n);

        clock_t start, end;

        start = clock();
        insertionSortAsc(a, n);
        end = clock();

        tim1[it] = ((double)(end - start));

        start = clock();
        insertionSortAsc(b, n);
        end = clock();

        tim2[it] = ((double)(end - start));

        start = clock();
        insertionSortAsc(c, n);
        end = clock();

        tim3[it] = ((double)(end - start));

        printf("%li, %li, %li, %li\n",
               n,
               (long int)tim1[it],
               (long int)tim2[it],
               (long int)tim3[it]);

        n += 5000;
    }

    return 0;
}
