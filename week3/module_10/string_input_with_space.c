#include <stdio.h>
#include<string.h>
int main()
{
    //    gets
    // char a[100];
    // gets(a);
    // printf("%s",a);
    // fgets
    char a[18];
    fgets(a,18,stdin);
    //pref
    printf("%s",a);



    return 0;
}