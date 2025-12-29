#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
const ll N = 1e6 + 10;
ll ar[N];
ll n;
ll p;
bool isok(ll h)
{
    ll wd = 0;
    for (int i = 0; i < n; i++)
    {
        if(ar[i]>=h){
            wd += ar[i] - h;
        }
    }
    if(wd>=p){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    op();
    cin >> n;
    cin >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    ll lo = 0;
    ll hi = 1e6;
    ll mid;
    while (hi-lo>1)
    {
        mid = (hi+lo) / 2;
        if(isok(mid)){
            lo = mid;
        }
        else{
            hi = mid-1;
        }
    }
    if(isok(hi)){
        cout << hi << endl;
    }
    else if(isok(lo)){
        cout << lo << endl;
    }
    

    return 0;
}