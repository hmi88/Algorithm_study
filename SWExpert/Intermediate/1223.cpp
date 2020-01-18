//출처: https://pluslab.tistory.com/117 [Plus Lab]
#include <iostream>
#include <stack>

using namespace std;
int main(void) {
    int length;
    char temp;
    string input;
    for(int t_case=0; t_case<10; t_case++) {
        string postfix = "";
        cin >> length;
        cin >> input;
        for(int i=0; i<length; i++) {
            if(input.at(i) == '+') {
                postfix += input.at(++i);
                postfix += '+';
            } else {
                postfix += input.at(i);
            }
        }
        int answer = 0;
        for(int i=0; i<length; i++) {
            if(postfix.at(i) != '+')
                answer += (postfix.at(i) - '0');
        }
        cout << "#" << t_case+1 << " " << answer << "\n";
    }
    return 0;
}
