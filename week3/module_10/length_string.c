#include <stdio.h>
#include<string.h>
int main()
{
    // int count = 0;
    char a[100];
    scanf("%s",&a);
    int len = strlen(a);
    // for (int i = 0; a[i]!='\0'; i++)
    // {
    //     count++;
    // }
    // printf("%d ",count);
    printf("%d ",len);

    return 0;
}