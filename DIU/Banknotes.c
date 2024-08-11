#include <stdio.h>

int main()
{
    int notes, baki;

    scanf("%d", &notes);

    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes / 100);
    baki = (notes % 100);

    printf("%d nota(s) de R$ 50,00\n", baki / 50);
    baki = (baki % 50);

    printf("%d nota(s) de R$ 20,00\n", baki / 20);
    baki = (baki % 20);

    printf("%d nota(s) de R$ 10,00\n", baki / 10);
    baki = (baki % 10);

    printf("%d nota(s) de R$ 5,00\n", baki / 5);
    baki = (baki % 5);

    printf("%d nota(s) de R$ 2,00\n", baki / 2);
    baki = (baki % 2);

    printf("%d nota(s) de R$ 1,00\n", baki / 1);
    return 0;
}