#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
vector<ll> getdivisor(ll num)
{
    vector<ll> divisor;
    for (ll i = 1; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            divisor.push_back(i);
            if (i != num / i)
            {
                divisor.push_back(num / i);
            }
        }
    }
    sort(divisor.begin(), divisor.end());
    return divisor;
}
int main(){
    op();
    ll n;
    cin >> n;
    vector<ll> x=getdivisor(n);
    for(auto v:x){
        cout << v << endl;
    }

    return 0;
}