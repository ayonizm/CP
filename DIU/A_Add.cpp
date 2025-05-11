#include <stdio.h>
void sum(int x, int y)
{
    int sum = x + y;
    printf("%d\n", sum);
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sum(a, b);
    int x = 98;

    return 0;
}