// linear structure search
#include <stdio.h>
int n = 8;
int M[] = {1, 2, 3, 5, 7, 9, 11, 15};
int f = 11;

int find()
{
    for(int i=0; i<n; i++)
    {
        if (f == M[i])
            return i+1;
    }
    return -1;
}

int find2()
{
    int start = 0;
    int end = 7;

    while (start<=end)
    {
        int middle = (start+end) / 2;
        if (M[middle]==f)
            return middle+1;
        if (M[middle]>f)
            end = middle - 1;
        else
            start = middle + 1;

    }
    return -1;
}

int main()
{
    printf("%d", find2());
    return 0;
}