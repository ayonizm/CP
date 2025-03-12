#include<stdio.h>
#include<string.h>
int main()
{
    long long int x;
    scanf("%lld", &x);
    long long ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%lld", &ar[i]);
    }
    //min
    // long long min = ar[0];
    // for (int i = 0; i < x; i++)
    // {
    //     if(ar[i]<min){
    //         min = ar[i];
    //     }
    // }
    // // max
    // long long max = ar[0];
    // for (int i = 0; i < x; i++)
    // {
    //     if(ar[i]>max){
    //         max = ar[i];
    //     }
    // }
    for (int i = 0; i < x-1; i++)
    {
        for (int j = i+1; j < x; j++)
        {
            if(ar[i]>ar[j]){
                int temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
        
    }
    
    printf("%lld\n", ar[x-1]-ar[0]);

    return 0;
}