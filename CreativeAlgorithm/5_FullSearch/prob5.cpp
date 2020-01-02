#include <stdio.h>
int n, m, N[100][100], w, h, ans;

void input()
{
    scanf("%d%d", &n, &m);
    scanf("%d%d", &w, &h);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            scanf("%d", &N[i][j]);
}

void solve()
{
    for(int i=0; i<(n+1-w); i++)
        for(int j=0; j<(m+1-h); j++)
        {
            int tmp = 0;
            for(int a=0; a<w; a++)
                for(int b=0; b<h; j++)
                    tmp += N[i+a][j+b];

            if (tmp > ans)
                ans = tmp;
        }
    printf("%d", ans);
}

int main()
{
    input();
    solve();
}