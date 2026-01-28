#include <stdio.h>

int main()
{
    int day, month, year;
    char hello;
    char hi = '-';
    scanf("%d %c %d %c %d", &day, &hello, &month, &hello, &year);

    printf("%02d%c%02d%c%02d\n", month, hello, day, hello, year);
    printf("%02d%c%02d%c%02d\n", year, hello, month, hello, day);
    printf("%02d%c%02d%c%02d\n", day, hi, month, hi, year);
    return 0;
}
