#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    double n;
    cin >> n;
    n = n / 3.0;
    printf("%.12lf\n", n*n*n);
    return 0;
}