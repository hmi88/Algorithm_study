// 1219. [S/W 문제해결 기본] 4일차 - 길찾기

#include<iostream>
using namespace std;

int arr[100][100];
bool vis[100];
bool flag;

void dfs(int v)
{
    vis[v] = true;
    if(v==99)
    {
        flag = true;
        return ;
    }
    else
    {
        for(int i=0; i<100; i++)
        {
            if(arr[v][i]==1 & !vis[i])
                dfs(i);
        }
    }
}

int main(int argc, char** argv)
{
    int test_case, t, len, s, e;
    int T=10;


    for(test_case = 1; test_case <= T; ++test_case)
    {
        int ans=0, check=0;
        vis[100] = {false, };

        cin >> t >> len;

        for (int i=0; i<len; i++)
        {
           cin >> s >> e;
           arr[s][e] = 1;
        }

        flag = false;
        dfs(0);

        if (flag)
            cout << "#" << test_case << " " << 1 << endl;
        else
            cout << "#" << test_case << " " << 0 << endl;
    }
    return 0;
}