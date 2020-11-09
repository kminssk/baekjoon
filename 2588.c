#include <stdio.h>

int main(void)
{
    int A, B;
    scanf("%d %d", &A, &B);

    int first, second, third;
    first = B / 100;
    second = (B % 100) / 10;
    third = (B % 100) % 10;

    printf("%d\n", third*A);
    printf("%d\n", second*A);
    printf("%d\n", first*A);

    printf("%d", (third*A)+(10*second*A)+(100*first*A));

    return 0;
}
