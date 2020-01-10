#include <stdio.h>
#include <string.h>
int main(void) {
    int test_case=10;
//    scanf("%d\n", &test_case);
    for (int z = 1; z <= test_case; z++) {
        int n;
        scanf("%d\n", &n);
        char str1[11] = { 0, };
        char str2[1001] = { 0, };
        scanf("%s", str1);
        scanf("%s", str2);
        int len1 = strlen(str1);
        int len2 = strlen(str2);
        int cnt = 0;
        for (int i = 0; i < len2; i++) {
            if (memcmp(str1, &str2[i], len1) == 0) {//같으면?
                cnt++;
                i = i + len1;
            }
        }


        printf("#%d %d\n", z,cnt);
    }
    return 0;
}

