#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int second, minutes, hour;
    hour = x / 365;
    x = x % 365;
    minutes = x / 30;
    x = x % 30;

    printf("%d ano(s)\n", hour);
    printf("%d mes(es)\n", minutes);
    printf("%d dia(s)\n", x);
    return 0;
}