#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int queue[MAX];
int front = -1, rear = -1;
void insert(int item)
{
    if (rear == MAX - 1)
        printf("Queue Overflow  ");
    else
    {
        if (front == -1)
            front = 0;
        rear = rear + 1;
        queue[rear] = item;
    }
}
int delete ()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("Queue Underflow  ");
        exit(1);
    }
    else
    {
        item = queue[front];
        front = front + 1;
        return item;
    }
}
int isEmpty()
{
    if (front == -1 || front > rear)
        return 1;
    else
        return 0;
}
void bfs(int a[MAX][MAX], int n, int start)
{
    int i = start, j;
    int visited[MAX] = {0};
    printf("    %d", i);
    visited[i] = 1;
    insert(i);
    while (!isEmpty())
    {
        i = delete ();
        for (j = 1; j <= n; j++)
        {
            if (a[i][j] == 1 && visited[j] == 0)
            {
                printf("    %d", j);
                visited[j] = 1;
                insert(j);
            }
        }
    }
}
int main()
{
    int n, i, j, a[MAX][MAX], start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);
    printf("Enter the starting vertex: ");
    scanf("%d", &start);
    printf("The nodes which are reachable are: ");
    bfs(a, n, start);
    return 0;
}

