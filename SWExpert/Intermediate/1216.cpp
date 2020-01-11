#include<iostream>
using namespace std;

char Arr[100][100];
int ans=0, chk=0;


void solve(int i, int j, int len)
{
    if(j+len-1 <=100)
    {
        for(int k=0; k<=(len/2); k++)
        {
            if(Arr[i][j+k]!=Arr[i][j+len-1-k])
            {
                chk=0;
                break;
            }
        }
    }
    else if(i+len-1 <=100)
    {
        for(int k=0; k<=(len/2); k++)
        {
            if(Arr[i+k][j]!=Arr[i+len-1-k][j])
            {
                chk=0;
                break;
            }
        }
    } else {
        chk=0;
    }
}

int main(int argc, char** argv) {
    int test_case;
    int T = 10;

    for (test_case = 1; test_case <= T; ++test_case) {
        for (int i = 0; i < 100; i++)
            for (int j = 0; j < 100; j++)
                cin >> Arr[i][j];

        ans = 100;
        for(ans; ans>0; ans--)
        {
            for(int i=0; i<100; i++)
            {
                for(int j=0; j<100; j++)
                {
                    chk = 1;
                    solve(i, j, ans);

                    if (chk==1)
                    {
                        cout << "#" << test_case << " " << ans << endl;
                        break;
                    }
                }
                if (chk==1)
                {
                    break;
                }
            }
            if (chk==1)
            {
                break;
            }
        }
    }
    return 0;
}