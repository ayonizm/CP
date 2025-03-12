#include<stdio.h>
#include<string.h>
int main()
{
    char name[100];
    scanf("%s", &name);
    int sum = 0;
    for (int i = 0; i < strlen(name); i++)
    {
        sum = sum + (name[i] - '0');
    }
    printf("%d", sum);

    return 0;
}