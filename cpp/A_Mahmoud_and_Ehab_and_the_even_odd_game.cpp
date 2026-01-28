#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
   #include<stdio.h>
int main(){
    switch (expression)
    {
    case /* constant-expression */:
        /* code */
        break;
    
    default:
        break;
    }
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>=c || b+c>=a || c+a>=b)
    {
        if (a==b && b==c && c==a)
        {
            printf("Valido-Equilatero\n");
        }
        else if (a!=b && b!=c && c!=a )
        {
            printf("Valido-Escaleno\n");
        }
        else {
            printf("Valido-Isoceles\n");
        }
        if (a*a==(b*b+c*c) || b*b==(a*a+c*c) || c*c=(b*b+a*a))
        {
            printf("Retangulo: S\n");
        }
        else {
            printf("Retangulo: N\n");
        }

    }
    else { printf("Invalido\n"); }

    return 0;
}
    return 0;
}