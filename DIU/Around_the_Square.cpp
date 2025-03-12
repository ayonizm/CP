#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const double pi = acos(-1);
int main(){
    op();
    double a, b, c, d,e;
    while (cin>>a>>b>>c>>d>>e)
    {
         double p = a * a;
         double a1 = pi * b * b;
         a1 = a1 / 4.0;
         double a2 = pi * c * c;
         a2 = a2 / 4.0;
         double a3 = pi * d * d;
         a3 = a3 / 4.0;
         double a4 = pi * e * e;
         a4 = a4 / 4.0;
         printf("%.3lf\n", p - (a1 + a2 + a3 + a4));
    }
    
    return 0;
}