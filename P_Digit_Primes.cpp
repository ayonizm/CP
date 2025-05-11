#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
#define MAX 5000000

ll pr[MAX];
bool flag[MAX + 1];
ll prime[MAX + 5];
ll total = 0;
void sieve()
{
    flag[0] = false;
    flag[1] = false;
    for (ll i = 2; i <= MAX; i++)
    {
        flag[i] = true;
    }
    ll f = sqrt(MAX);
    for (ll i = 0; i <= f; i++)
    {
        if (flag[i])
        {
            for (ll j = i * i; j <= MAX; j += i)
            {
                flag[j] = false;
            }
        }
    }
    for (ll i = 2; i <= MAX; i++)
    {
        if (flag[i])
        {
            prime[total++] = i;
        }
    }
}
bool digsum(int n){
    string s = to_string(n);
    ll sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        sum += (s[i] - '0');
    }
    if(flag[sum]){
        return true;
    }
    else{
        return false;
    }
    
}
ll sum = 0;
void pre(){

    for (int i = 1; i <= MAX; i++)
    {
        if(flag[i]&&digsum(i)){
            sum++;
            pr[i] = sum;
        }
        else{
            pr[i] = sum;
        }
    }
    
}
void solve(){
    ll a, b;
    cin >> a >> b;
    cout << pr[b] - pr[a - 1] << endl;
}
int main(){
    op();
    sieve();
    pre();
    ll n;
    cin >> n;
    pr[0] = 0;
    while (n--)
    {
        solve();
    }
    

    return 0;
}