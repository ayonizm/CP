#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();

    ll n;
    cin >> n;
    
    ll k = n * (n + 1);
    k++;
    cout << k << endl;
    return 0;
}