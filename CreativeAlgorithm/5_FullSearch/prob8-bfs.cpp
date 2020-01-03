#include <stdio.h>
#include <queue>
using namespace std;

struct ELE{int v, cnt;};
queue<ELE> Q;

int main()
{
    int a, b;
    ELE tmp;
    scanf("%d%d", &a, &b);

    Q.push({a, 0});
    while(!Q.empty())
    {
        tmp = Q.front(), Q.pop();
        if(tmp.v == b)
            break;

        if (tmp.v<b)
        {
            Q.push({tmp.v+10, tmp.cnt+1});
            Q.push({tmp.v+5, tmp.cnt+1});
            Q.push({tmp.v+1, tmp.cnt+1});
        } else
        {
            Q.push({tmp.v-10, tmp.cnt+1});
            Q.push({tmp.v-5, tmp.cnt+1});
            Q.push({tmp.v-1, tmp.cnt+1});
        }

    }



}