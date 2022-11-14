#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int stack[MAX];
int top = -1;
void push(int item)
{
    if (top == MAX - 1)
        printf("Stack Overflow  ");
    else
    {
        top = top + 1;
        stack[top] = item;
    }
}
int pop()
{
    int item;
    if (top == -1)
    {
        printf("Stack Underflow  ");
        exit(1);
    }
    else
    {
        item = stack[top];
        top = top - 1;
        return item;
    }
}
int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
void dfs(int a[MAX][MAX], int n, int start)
{
    int i = start, j;
    int visited[MAX] = {0};
    printf("    %d", i);
    visited[i] = 1;
    push(i);
    while (!isEmpty())
    {
        i = pop();
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == 1 && visited[j] == 0)
            {
                printf("    %d", j);
                visited[j] = 1;
                push(i);
                push(j);
                break;
            }
        }
    }
}
int main()
{
    int a[MAX][MAX], n, i, j, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    printf("The nodes which are reachable are: ");
    dfs(a, n, start);
    return 0;
}
