#include <stdio.h>

int main() {
    char arr[] = "hello";
    char *p = "hello";

    arr[0] = 'H'; 
    printf("%s\n", arr);

    // p[0] = 'H'; // 리터럴 수정 시도 (Segfault 발생하므로 주석 처리)
    // printf("%s\n", p);

    return 0;
}
