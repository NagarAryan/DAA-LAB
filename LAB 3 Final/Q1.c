#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int primeGeneral(long n)
{
    long i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}
int recursivePrime(int n, int i)
{
    if (n <= 2)
        return (n == 2) ? 1 : 0;
    if (n % i == 0)
        return 0;
    if (i * i > n)
        return 1;
    return recursivePrime(n, i + 1);
}
long long c[10000];
void coef(int n)
{
    c[0] = 1;
    for (int i = 0; i < n; c[0] = -c[0], i++)
    {
        c[1 + i] = 1;
        for (int j = i; j > 0; j--)
            c[j] = c[j - 1] - c[j];
    }
}
int AKSPrime(int n)
{
    coef(n);
    c[0]++, c[n]--;
    int i = n;
    while (i-- && c[i] % n == 0)
        ;
    return i < 0;
}
int main()
{
    clock_t start, end;
    double time_taken;
    int ans;
    long n = 7949;
    srand(time(0));
    for (int i = 1; i <= 10; i++)
    {
        n = rand() % 10000;
        printf("%ld\n", n);
        start = clock();
        ans = primeGeneral(n);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d General algorithm time : %f\n", ans, time_taken);

        start = clock();
        ans = recursivePrime(n, 2);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d Recursive algorithm time : %f\n", ans, time_taken);

        start = clock();
        ans = AKSPrime(n);
        end = clock();
        time_taken = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Ans : %d AKS algorithm time : %f\n", ans, time_taken);
    }
}