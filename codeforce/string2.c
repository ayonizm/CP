#include <stdio.h>
int main()
{
    // char a[5] = {'r', 'a', 'h', 'a', 't'};
    char a[]="rahat";
    int n = sizeof(a)/sizeof(char);
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c", a[i]);
    // }
    printf("%s\t",a);
    printf("%d",n);

    return 0;
}