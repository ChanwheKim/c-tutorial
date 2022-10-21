#include <stdio.h>

int main(void){
    int nInput1 = 0;
    int nInput2 = 0;

    printf("두 정수를 입력하세요.");
    scanf("%d%d", &nInput1, &nInput2);

    printf("AVG : %f", (nInput1 + nInput2) / 2.0);

    return 0;
}
