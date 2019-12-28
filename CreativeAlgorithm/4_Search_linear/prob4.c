// lower bound
// lower bound is defined dually as an element of K which is less than or equal to every element of S.

#include <stdio.h>

/* n개로  이루어진  정수  집합에서  원하는  수  k  이상인  수가  처음으로  등장하는  위치 를  찾으시오.

8
1 2 3 5 7 9 11 15
6 // 5

5
1 3 5 7 7
7 // 4
*/

int n, k, A[100];

int solve(int s, int e) {
    int m;
    while (s < e) {
        m = (s + e) / 2;
        if (A[m] < k)
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