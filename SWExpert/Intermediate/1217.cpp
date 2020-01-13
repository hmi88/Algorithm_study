    /* 1217. [S/W 문제해결 기본] 4일차 - 거듭 제곱
    다음과 같이 두 개의 숫자 N, M이 주어질 때, N의 M 거듭제곱 값을 구하는 프로그램을 재귀호출을 이용하여 구현해 보아라.
    2 5 = 2 X 2 X 2 X 2 X 2 = 32
    3 6 = 3 X 3 X 3 X 3 X 3 X 3 = 729

    1
    9 8
    2
    2 8
    */

    #include<iostream>
    using namespace std;


    int recursion(int ans, int n, int m)
    {
        ans *= n;
        if (m==1)
            return ans;

        recursion(ans, n, m-1);
    }

    int main(int argc, char** argv)
    {
        int test_case;
        int T=10;
        int t, n, m;

        for(test_case = 1; test_case <= T; ++test_case)
        {
            cin >> t;
            cin >> n >> m ;
            int ans=1;
            ans = recursion(ans, n, m);

            cout << "#" << test_case << " " << ans << endl;
        }
        return 0;
    }