#include <stdio.h>
int S[100], n, k;

int find(int s, int e)
{
    while(s <= e)
    {
        int m = (s+e) / 2;
        if(S[m]==k)
            return m;
        if(S[m] > k)
            e = m-1;
        else
            s = m+1;
    }
    return -1;
}

int main()
{
    scanf("%d%d", &n, &k);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &S[i]);
    }
    printf("%d\n", find(0, n-1));
    return 0;
}