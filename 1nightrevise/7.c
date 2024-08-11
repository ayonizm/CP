#include <stdio.h>
int main()
{
    printf("\a");             // beep
    printf("\n");             // new line
    printf("hello  \bworld\n"); // back slash and new line
    printf("jgcfg\fkg\n");//page break
    printf("hello\rworld\n");//print from /r
    printf("kjyhfiuy\tytv\n");
    //tab
    printf("\\ ");//for backslash
    printf("\? ");//for qs mark
    printf("\' \n");//for quatation mark
    printf("\101 ");//for octal of the number
    printf("\x41 ");//for hexadecimal of the number


    return 0;
}