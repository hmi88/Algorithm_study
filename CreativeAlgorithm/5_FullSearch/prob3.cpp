#include <stdio.h>
int n, ans;
int chk[21][21][21];

void solve2(void)
{
    for(int a=1; a<=n; a++)
        for(int b=a; b<=n; b++)
            for(int c=b; c<=n; c++)
                if(a+b+c == n && a+b>c)
                    ans++;
}

void solve(int n, int a, int b, int c)
{

    if (a+b+c == n)
    {
        if (a<=b && b<=c && a+b>c && chk[a][b][c]==0)
        {
            ans++;
            chk[a][b][c] = 1;
            printf("%d %d %d !!!!! \n", a, b, c);
        }
        return ;
    }
    solve(n, a+1, b, c);
    solve(n, a, b+1, c);
    solve(n, a, b, c+1);
}

int main()
{
    scanf("%d", &n);
//    solve2();
    solve(n, 1, 1, 1);
    printf("%d\n", ans);
}