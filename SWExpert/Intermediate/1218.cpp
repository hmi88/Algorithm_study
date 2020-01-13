/* 1218. [S/W 문제해결 기본] 4일차 - 괄호 짝짓기
 * 4 종류의 괄호문자들 '()', '[]', '{}', '<>' 로 이루어진 문자열이 주어진다.
 * 이 문자열에 사용된 괄호들의 짝이 모두 맞는지 판별하는 프로그램을 작성한다.
 * 예를 들어 아래와 같은 문자열은 유효하다고 판단할 수 있다.
*/

#include<iostream>
using namespace std;


int main(int argc, char** argv)
{
    int test_case;
    int T=10;
    int t;
    char Array[1000], Stack[1000];
    int top=0;

    for(test_case = 1; test_case <= T; ++test_case)
    {
        int ans = 0;

        cin >> t;
        for(int i=0; i<t; i++) {
            cin >> Array[i];
        }

        for(int i=t; i>=0; i--)
        {
            stack[top] = Array[i];
            top++;
            if(stack[top]=="("])
            {}
            else if(stack[top]=="["])
            {}
            else if(stack[top]=="{"])
            {}
            else if(stack[top]=="<"])
            {}
        }





        cout << "#" << test_case << " " << ans << endl;
    }
    return 0;
}