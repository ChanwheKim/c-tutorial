#include <stdio.h>

int main(void)
{
    char szName[32] = { 0 };
    int nAge = 0;

    // 사용자로부터 정수를 입력받아 nAge 변수에 저장한다.
    printf("나이를 입력하세요. : ");
    scanf("%d", &nAge);

    // 이름 중간에 빈 공백이 있어도 문제없이 입력할 수 있다.
    printf("이름을 입력하세요. :");
    fflush(stdin);
    fgets(szName, sizeof(szName), stdin);

    // 이름과 나이를 출력한다.
    printf("%d, %s\n", nAge, szName);

    return 0;
}
