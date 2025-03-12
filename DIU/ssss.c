#include<stdio.h>
#include<string.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    while (x!=0&&y!=0)
    {
        if(x>y){
            x %= y;
        }
        else{
            y %= x;
        }
    }
    
    return 0;
}