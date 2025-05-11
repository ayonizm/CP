#include <stdio.h>
#include <string.h>
int main()
{
    int c;
    char name[10000];
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        scanf("%s", name);
        int x = strlen(name);
        float len = x;
        printf("%.2f\n", len / 100);
    }

    return 0;
}