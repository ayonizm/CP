#include <stdio.h>
#include <string.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    char num[n];
    int count = 0;
    for (int i = 0; i <n; i++)
    {
        scanf(" %c", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
       count = count + num[i]-'0'; 
    }
    printf("%d",count);
    return 0;
}