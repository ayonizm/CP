#include <stdio.h>
int main()
{
    int n,unit;
    double code[5];
    scanf("%d %d", &n, &unit);
    code[0]=4.00;
    code[1]=4.50;
    code[2]=5.00;
    code[3]=2.00;
    code[4]=1.50;
    printf("Total: R$ %.2lf\n",code[n-1]*unit);

    return 0;
}