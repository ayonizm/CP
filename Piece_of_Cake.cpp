#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const double pi = acos(-1);
int main(){
    op();
    int x;
    cin >> x;
    while(x--)
    {
        double c, v, a,t,u;
        cin >> c >> v >> a;
        a = (a * pi) / 180.00;
        t = sqrt(((c * c) + (v * v)) - ((2 * c * v) * cos(a)));
        u = sqrt((2 * ((t * t) + (v * v))) - (c * c));
       printf("%.9lf\n", (u * u) + (c * c));
        
    }
    return 0;
}