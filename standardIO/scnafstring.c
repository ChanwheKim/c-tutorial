#include <stdio.h>

int main(void)
{
    // 문자열을 저장하기 위한 배열 선언 및 정의
    char szBuffer[32] = { 0 };

    scanf("%s", szBuffer);
    printf("%s\n", szBuffer);

    return 0;
}
