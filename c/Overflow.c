// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int x1, x2;
//     char c;
//     scanf("%d %c %d", &x1, &c, &x2);
//     int sum;
//     if(c=='*'){
//         sum = x1 * x2;
//     }
//     else{
//         sum = x1 + x2;
//     }
//     if(sum>n){
//         printf("OVERFLOW\n");
//     }
//     else{
//         printf("OK\n");
//     }
//     return 0;
// }
#include <stdio.h>
int main()
{
    int max, sum;
    int op1, op2;
    char x;

    scanf("%d", &max);
    scanf("%d %c %d", &op1, &x, &op2);

    if (x == '+')
    {
        sum = op1 + op2;
    }
    else
    {
        sum = op1 * op2;
    }
    if (sum <= max)
    {
        printf("OK\n");
    }
    else
    {
        printf("OVERFLOW\n");
    }
    return 0;
}