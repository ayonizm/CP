#include <stdio.h>
int main()
{
    char x;
    scanf("%c", &x);
    int y = x;
    if (y >= 48 && y <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (y >= 97 && y <= 122)
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else
    {
        printf("ALPHA\nIS CAPITAL");
    }

    return 0;
}