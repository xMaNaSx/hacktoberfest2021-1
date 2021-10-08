#include <stdio.h>
#define INF 9999
int n, m, i, j, adj[20][20], src, dist[20];
int path[20];
void dijkstra()
{
    int visit[20];
    int mini, minVal;
    for (i = 1; i <= n; i++)
    {
        dist[i] = INF;
        visit[i] = 0;
        path[i] = src;
    }
    dist[src] = 0;
    for (i = 2; i <= n; i++)
    {
        minVal = INF;
        for (j = 1; j <= n; j++)
        {
            if (!visit[j] && dist[j] < minVal)
            {
                minVal = dist[j];
                mini = j;
            }
        }
        visit[mini] = 1;
        for (j = 1; j <= n; j++)
        {
            if (!visit[j] && adj[mini][j] && dist[j] > dist[mini] + adj[mini][j])
                dist[j] = dist[mini] + adj[mini][j], path[j] = mini;
        }
    }
}
int main()
{
    printf("\nEnter the number of vertices : ");
    scanf(" %d", &n);
    printf("\nEnter the cost matrix below:\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf(" %d", &adj[i][j]);
        }
    }
    printf("\nEnter the source vertex : ");
    scanf(" %d", &src);
    dijkstra();
    printf("\nThe shortest path from\n");
    for (i = 1; i <= n; i++)
    {
        if (i != src)
        {
            printf("\n%d -> %d = %d\n", src, i, dist[i]);
            printf("\n\tPath=%d ", i);
            j = i;
            do
            {
                j = path[j];
                printf("<- %d ", j);
            } while (j != src);
        }
    }
    return 0;
}