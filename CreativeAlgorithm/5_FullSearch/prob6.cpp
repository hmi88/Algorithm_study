//o-mok
#include <stdio.h>

int a[19+2][19+2];

int search1(int color, int i, int j, int cnt)
{
    for(; color==a[i][j+1]; j++)
        cnt++;
    return cnt==5 ? 1:0;
}

int search2(int color, int i, int j, int cnt)
{
    for(; color==a[i+1][j+1]; j++)
        cnt++;
    return cnt==5 ? 1:0;
}

int search3(int color, int i, int j, int cnt)
{
    for(; color==a[i+1][j]; j++)
        cnt++;
    return cnt==5 ? 1:0;
}

int search4(int color, int i, int j, int cnt)
{
    for(; color==a[i-1][j+1]; j++)
        cnt++;
    return cnt==5 ? 1:0;
}

int main()
{
    int i,j;
    for(i=1; i<=19; i++)
        for(j=1; j<=19;j++)
            scanf("%d", &a[i][j]);

    for(i=1; i<=19; i++)
        for(j=1; j<=19; j++)
            if(a[i][j]!=0)
            {
                if(a[i][j-1]!=a[i][j]&&search1(a[i][j],i,j,1)==1)
                {
                    printf("%d\n%d %d", a[i][j], i, j);
                    return 0;
                }
                if(a[i-1][j-1]!=a[i][j]&&search2(a[i][j],i,j,1)==1)
                {
                    printf("%d\n%d %d", a[i][j], i, j);
                    return 0;
                }
                if(a[i-1][j]!=a[i][j]&&search3(a[i][j],i,j,1)==1)
                {
                    printf("%d\n%d %d", a[i][j], i, j);
                    return 0;
                }
                if(a[i+1][j-1]!=a[i][j]&&search4(a[i][j],i,j,1)==1)
                {
                    printf("%d\n%d %d", a[i][j], i, j);
                    return 0;
                }
            }
    printf("0");
    return 0;
}