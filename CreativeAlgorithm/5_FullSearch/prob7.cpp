//path
#include <stdio.h>

int n, m, P[10][30], chk[10], ans;

void input()
{
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++)
    {
        int s, e, w;
        scanf("%d %d %d", &s, &e, &w);
        P[s][e] = P[e][s] = w;
    }
}

void solve(int V, int W)
{
    if (V==n)
    {
        if(W<ans) ans = W;
            return ;
    }
    for(int i=1; i<=n; i++)
        if(!chk[i] && P[V][i])
        {
            chk[i] = 1;
            solve(i, W+P[V][i]);
            chk[i] = 0;
        }
}

int main()
{
    input();
    solve(1, 0);
    return 0;
}