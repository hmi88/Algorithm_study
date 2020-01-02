#include <stdio.h>
int n, N[100], w, ans, tmp;

void input()
{
    scanf("%d", &n);
    scanf("%d", &w);
    for(int i=0; i<n; i++)
        scanf("%d", &N[i]);
}

void solve()
{
    for(int i=0; i<(n+1-w); i++)
    {
        tmp = 0;
        for(int j=0; j<w; j++)
            tmp += N[i+j];

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