#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        double x, y;
        cin >> x >> y;
        double p = x * y;
        p = p / 2.0;
        printf("%.9lf\n", p);
    }
    
    return 0;
}