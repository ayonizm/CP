#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define all(a) (a).begin(), (a).end()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
int ar[100];
void hello(){
    ar[0] = 0;
    ar[1] = 1;
    for (int i = 2; i < 100; i++)
    {
        ar[i] = ar[i - 1] + ar[i - 2];
    }
    
}
int main(){
    op();
    hello();
    ll n;
    cin >> n;
    cout << ar[n];

    return 0;
}