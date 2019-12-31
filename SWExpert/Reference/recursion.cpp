#include <stdio.h>

long long factorial(int num)
{
    if (num == 0)
    {
        return 1;
    } else
    {
        return num * factorial(num - 1);
    }
}

int main(void)
{
    int test_case;
    int T;
    int num;
    long long value;

    scanf("%d", &T);

    for (test_case = 1; test_case <=T; test_case++)
    {
        scanf("%d", &num);
        value = factorial(num);
        printf("#%d %d! = %lld\n", test_case, num, value);
    }
}