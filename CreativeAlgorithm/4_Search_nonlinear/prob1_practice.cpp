//mole hole
int n, A[101][101], cnt, S[101];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

void input()
{
    scanf("%d", &n)
    for(int i=0; i<n; i++)
        for(int j=0; j<; j++)
            scanf("%d ", &A[i][j]);
}

void output()
{
    printf("&d\n", cnt);
    for(int i=0; i<cnt; i++)
        printf("%d\n", S[i]);
}

bool safe(int a, int b)
{
    return (0<=a && a<n) && (0<=b && b<n);
}

bool cmp(int a, int b)
{
    return a>b;
}

void dfs(int a, int b, int c)
{
    A[a][b] = c;
    for(int i=0; i<n; i++)
        if(safe(a+dx[i], b+dy[i]) && A[a+dx[i]][b+dy[i]]==1)
            dfs(a+dx[i], b+dy[i], c)
}

void solve()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j] == 1)
            {
                cnt++;
                dfs(i, j, cnt+1);
            }

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j])
                S[A[i][j]-2]++;
    std:sort(S, S+cnt, cmp)

}

int main()
{
    input();
    solve();
    output();
}