/*
 7 11
 1 2 47
 1 3 69
 2 4 57
 2 5 124
 3 4 37
 3 5 59
 3 6 86
 4 6 27
 4 7 94
 5 7 21
 6 7 40
 */
#include <stdio.h>
int n, m, G[101][101];

int main()
{
    // O(nm) adjacent matrix
    scanf("%d %d", &n, &m);
    for(int i=0; i<m; i++)
    {
        int a, b, w;
        scanf("%d %d %d", &a, &b, &w);
        G[a][b] = G[b][a] = w;
    }

    // O(n+m) adjacent list
    // std::vector

}

bool visited[101];
void dfs(int k)
{
    for(int i=1; i<=n; i++)
        if(G[k][i] && !visited[G[k][i]])
        {
            visited[G[k][i]] = true;
            dfs(G[k][i]);
        }
}
