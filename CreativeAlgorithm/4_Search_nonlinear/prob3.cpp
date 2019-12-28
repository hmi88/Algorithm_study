// mole hole - bfs
// prevent runtime err

#include <stdio.h>
#include <algorithm>
#include <queue>

struct VERTEX{int a, b;};
int n, A[101][101], cnt, Size[101];
int dx[4]={1, 0, -1, 0}, dy[4]={0, 1, 0, -1};

bool safe(int a, int b)
{
    return (a>=0 && a<n) && (b>=0 && b<n);
}

bool cmp(int a, int b)
{
    return a>b;
}

void input()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &A[i][j]);
}

void output()
{
    printf("%d\n", cnt);
    for(int i=0; i<cnt; i++)
        printf("%d\n", Size[i]);
}


void bfs(int a, int b, int c)
{
    std::queue<VERTEX> Q;
    Q.push((VERTEX){a, b}), A[a][b]=c;
    while(!Q.empty())
    {
        VERTEX curr=Q.front(); Q.pop();
        for(int i=0; i<4; i++)
            if(safe(curr.a+dx[i], curr.b+dy[i]) && A[curr.a+dx[i]][curr.b+dy[i]]==1)
            {
                A[curr.a+dx[i]][curr.b+dy[i]]=c;
                Q.push((VERTEX){curr.a+dx[i], curr.b+dy[i]});
            }
    }
}


void solve()
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j]==1)
            {
                cnt++;
                bfs(i, j, cnt+1);
            }
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            if(A[i][j])
                Size[A[i][j]-2]++;
    std::sort(Size, Size+cnt, cmp);
}



int main()
{
    input();
    solve();
    output();
    return 0;
}