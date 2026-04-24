#include <stdio.h>
#include <string.h>

int main() {
    char s1[10] = "hi";
    char s2[] = "hi";
    char s3[] = {'h', 'i', '\0'};

    printf("%zu %zu\n", sizeof(s1), strlen(s1)); // 10 2
    printf("%zu %zu\n", sizeof(s2), strlen(s2)); // 3 2 (NULL 문자 포함)
    printf("%zu %zu\n", sizeof(s3), strlen(s3)); // 3 2

    return 0;
}
