#include <stdio.h>
void hello(int x,int i){
    if (i==x)
    {
        printf("%d ",i);
        return;
    }
    
    hello(x,i+1);
    printf("%d ",i);
    if (i==2)
    {
        printf("1\n");
    }
    
}
int main()
{
    int x;
    scanf("%d", &x);
    int i = 2;
    hello(x,i);
    return 0;
}