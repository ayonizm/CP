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
        double p;
        cin >> p;
        double x = (p - 2) * 180.0;
        x = x / p;
        printf("%.6lf\n", x);
    }
    
    return 0;
}