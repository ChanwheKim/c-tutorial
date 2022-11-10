#include <stdio.h>

int main(void)
{
    int nInput = 0, nTotal = 0;

    scanf("%d", &nInput);

    nTotal += nInput;

    scanf("%d", &nInput);

    nTotal += nInput;

    scanf("%d", &nInput);

    nTotal += nInput;

    printf("total %d\n", nTotal);

    return 0;
}
