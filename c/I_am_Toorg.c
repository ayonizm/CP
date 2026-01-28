#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[10001];

    for (int i = 0; i < n; i++)
    {
        fgets(name, 10001, stdin);
        printf("I am Toorg!\n");
    }

    return 0;
}