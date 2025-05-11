#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const double pi = acos(-1);
int main(){
    op();
    
    double p;
    cin >> p;
    double k = pi * p * p;
    printf("%.10lf\n", k);
    return 0;
}