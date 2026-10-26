#include <stdio.h>

int main()
{
    int n, shi, ge, t;

    scanf("%d", &n);

    shi = n / 10;
    ge = n % 10;

    t = shi;
    shi = ge;
    ge = t;

    n = shi * 10 + ge;

    printf("%d\n", n);
    return 0;
}
