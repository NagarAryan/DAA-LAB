#include <stdio.h>
#include <time.h>
int main()
{
    int n;
    printf("Enter the number you want to check for prime: ");
    scanf("%d", &n);
    int flag = 0;
    int counter=1;
    clock_t S,E;
    S=clock();
    if (n == 1)
    {
        printf("%d is not a prime number", n);
    }
    else
    {
        int i;
        if (n % 2 == 0 || n % 3 == 0)
            flag = 1;
        for (i = 5; i <= sqrt(n); i=i+2)
        {   counter ++;
            if (n % i == 0)
            {
                printf("%d is not a prime number", n);
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("%d is not a prime number", n);

        if (flag == 0)
        {
            printf("%d is a prime number", n);
        }
    }
    E=clock();
    printf("%d \n",(E-S));
    printf("\nThe frequency is :%d",counter);
    return 0;
}