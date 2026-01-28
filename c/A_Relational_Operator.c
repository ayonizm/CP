#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        long long int x, y;
        scanf("%lld %lld", &x, &y);
        if (x>y)
        {
            printf(">\n");
        }
        else if(x<y){
            printf("<\n");
        }
        else{

            printf("=\n");
        }
        
    }
    
    return 0;
}