#include <stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int x = strlen(b);
    // printf("%d",x);
    for (int i = 0; i <= x; i++)
    {
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    



    return 0;
}