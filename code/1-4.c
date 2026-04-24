#include <stdio.h>

int my_strcmp(const char *a, const char *b) {
    while (*a != '\0' && (*a == *b)) {
        a++;
        b++;
    }
    // 서로 다른 문자가 나타나면 아스키 코드 차이 반환
    return *(unsigned char *)a - *(unsigned char *)b;
}

int main() {
    printf("%d\n", my_strcmp("abc", "abcd"));
    printf("%d\n", my_strcmp("abc", "abc"));
    printf("%d\n", my_strcmp("b", "a"));
    
    return 0;
}
