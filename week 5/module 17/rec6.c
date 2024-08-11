#include<stdio.h>
int hello(char x[],int i){
    if (x[i]=='\0')
    {
        return 0;
    }
    
    int l = hello(x,i+1);
    return l+1;
}
int main()
{
   char x[6]="hello";
   int i = 0;
   int len = hello(x,i);
   printf("%d",len);
   return 0;
}