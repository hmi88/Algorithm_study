#include <stdio.h>
int A[9][9], ans, ans_i, ans_j;

void input(void)
{
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            scanf("%d", &A[i][j]);
}

void solve(void)
{
    for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
            if (A[i][j] > ans)
            {
                ans = A[i][j];
                ans_i = i+1;
                ans_j = j+1;
            }

    printf("%d\n", ans);
    printf("%d %d\n", ans_i, ans_j);
}

int main()
{
    input();
    solve();
    return 0;
}