#include <stdio.h>

int n, sum;

void solve(void)
{
    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
            sum += i;
    }
    printf("%d\n", sum);
}

int main()
{
    scanf("%d", &n);
    solve();
}