#include<stdio.h>
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    return gcd(b % a, a);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d ", gcd(x, y));
    int lcm = (x * y) / gcd(x, y);
    printf("%d", lcm);
    return 0;
}