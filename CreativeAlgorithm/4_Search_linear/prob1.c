// Find Max Value
#include <stdio.h>
#define MAXN 9
int ans, A[MAXN+1];

void solve(void)
{
    for(int i=1; i<MAXN+1; i++)
    {
        scanf("%d", &A[i]);
        if(A[ans]<A[i]) ans=i;
    }
}

int main()
{
    solve();
    printf("%d\n%d\n", A[ans], ans);
    return 0;
}