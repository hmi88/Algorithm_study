//minimum sum
#include <stdio.h>
int n, S[10][10], col_check[10], ans;

void input()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &S[i][j]);
}

void solve(int a, int b)
{
    if(a==n)
    {
        if(b < ans)
            ans = b;
        return;
    }
    for(int i=0; i<n; i++)
    {
        if(col_check[i]==0)
        {
            col_check[i]=1;
            solve(a+1, b+S[a][i]);
            col_check[i]=0;
        }
    }
    return;
}

int main()
{
    input();
    solve(0, 0);
    printf("%d", ans);
    return 0;
}