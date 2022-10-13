#include <stdio.h>

int main(void)
{
    int nInput = 0;
    scanf("%d\n", &nInput); // 입력완료의 개행과 형식문자의 개행을 구별할 수 없음. scanf 함수에는 개행문자 미포함해야 함.

    printf("%d\n", nInput);
    return 0;
}
