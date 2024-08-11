#include<stdio.h>
void char_to_ascii(char x){
    printf("%d",x);
} 
int main()
{
    char x;
    scanf("%c",&x);
    char_to_ascii(x);

   return 0;
}