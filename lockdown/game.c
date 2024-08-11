#include <stdio.h>
int prime(int x)
{
    int count = 0;
    for (int i = 2; i <= x; i++)
    {
        if (x % i == 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    // scanf("%d", &n);
    // if (prime(n)==1)
    // {
    //     printf("prime number\n");
    // }
    // else{
    //     printf("not prime number\n");
    // }
    do{
        
        printf("enter a number please: ");
        scanf("%d",&n);
        if (prime(n)==1)
        {
            printf("prime number\n");
            break;
        }
        else{
            printf("not prime number\n");
        }
        
    }
    while (prime(n) != 0);

    return 0;
}