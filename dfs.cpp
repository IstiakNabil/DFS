#include<stdio.h>
int visited[5];
int dfs(int G[5][5], int node)
{
    visited[node] = 1;
printf("%d ", node);
 for(int i=0; i<5; i++)
    {
        if(G[node][i]==1 && visited[i]==0)
        {
            /// it's an unvisited child
            dfs(G, i);
        }
    }
}
int main()
{
int G[5][5] = {
        {0, 1, 1, 1, 0},
        {1, 0, 0, 0, 1},
        {1, 0, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {0, 1, 1, 0, 0}
    };
    dfs(G, 1);
}