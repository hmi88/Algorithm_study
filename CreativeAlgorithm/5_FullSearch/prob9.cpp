#include <stdio.h>
int n, cnt;

int isprime(int x)
{
    if(x<2) return 0;
    for(int i=2; i*i<=x; i++)
        if(x%i==0)
            return 0;
    return 1;
}

void solve(int num, int len)
{
    if(len==n)
    {
        if(num==0) return;

        int temp=num;
        while(temp)
        {
            if(!isprime(temp))
                return ;
            temp /= 10;
        }
        cnt++;
        printf("%d\n", num);
        return ;
    }
    else
    {
        for(int i=1; i<=9; i++)
            solve(num*10+i, len+1);
    }
}

int main()
{
    scanf("%d", &n);
    solve(0, 0);
    printf("%d", cnt);
}