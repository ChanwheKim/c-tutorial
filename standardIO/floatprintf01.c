#include <stdio.h>

int main(void)
{
    // 실수 자료 형식의 메모리 크기(바이트 단위)를 출력
    printf("%d\n", sizeof(123.456F)); // 4
    printf("%d\n", sizeof(123.456)); // 8

    // float 형식을 실수 형식으로 출력
    printf("%f\n", 123.456F); // float 123.456001

    // double 형식을 실수 형식으로 출력
    printf("%f\n", 123.456); // double 123.456000
    printf("%lf\n", 123.456); // long double 123.456000

    return 0;
}
