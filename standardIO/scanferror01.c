#include <stdio.h>

int main(void)
{
    int nInput = 0;

    scanf("%d", nInput); // -> 형식 문자 외 나머지 인수는 모두 주소. 주소연산자 & 추가 필요
    // scanf("%d", &nInput);

    printf("Input : %d\n", nInput);

    return 0;
}
