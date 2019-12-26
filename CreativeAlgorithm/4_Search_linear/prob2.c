// 3,6,9
#include <stdio.h>
int n;

void run()
{
    for(int i=1; i<=n; i++)
    {
        if ((i%3) == 0)
            printf("x ");
        else
            printf("%d ", i);
    }
}

int main()
{
    scanf("%d", &n);
    run();
    return 0;
}