// #include<bits/stdc++.h>
// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define ll long long int
// const ll mod = 10e9 + 7;
// const ll MAX = 5e5 + 5;
// vector<ll> facto(MAX + 5, 1);
// void precompute_fac(){
//     for (int i = 2; i <=MAX; i++)
//     {
//         facto[i] = (facto[i - 1]* i) % mod;
//     }
// }
// int main(){
//     op();
//     precompute_fac();
//     ll n;
//     cin >> n;
//     cout << facto[987];
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
long long  m=10e9+7;
int main(){
    long long  n;
    cin>> n;

    long long  fact =1;
    for (int i = 2; i <=n; i++)
    {
        fact=(fact*i)%m;
    }
    cout<<fact<<endl;
    return 0;
}