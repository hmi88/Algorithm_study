// lower bound
#include <stdio.h>
/*
8
1 2 7 7 7 7 11 15
7
*/

int n, k, A[100];

int solve(int s, int e) {
    int m;
    while (s < e) {
        m = (s + e) / 2;
        if (A[m] <= k)
            s = m + 1;
        else
            e = m;
    }
    return e + 1;
}

int main()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &k);
    printf("%d\n", solve(0, n));
    return 0;
}