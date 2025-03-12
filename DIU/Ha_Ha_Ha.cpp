#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    int p = 1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        cout <<"Case "<<p++<<": " <<(a * a) + (b * b) << endl;
     }
     
    return 0;
}