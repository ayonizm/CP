#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    long long int x;
    scanf("%lld", &x);
    // long long int first = (long long int)pow(2, x);
    // long long int second = (long long int)pow(x, 2);
    if (pow(2, x) > pow(x, 2))
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    
    return 0;
}