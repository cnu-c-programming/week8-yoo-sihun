#include <stdio.h>
#include <string.h>

int main() {
    char *p = "hello";
    char arr[] = "hello";

    // sizeof(p)는 포인터의 크기(보통 8), sizeof(arr)는 배열 전체 크기(6)
    printf("%zu %zu\n", sizeof(p), strlen(p));
    printf("%zu %zu\n", sizeof(arr), strlen(arr));

    return 0;
}
