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
int main(){
    op();
    ll n;
    cin >> n;
    vector<ll> a;
    for (int i = 0; i < 12; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }
    sort(a.begin(), a.end(), greater<ll>());
    ll sum = 0; 
    ll count = 0;
    if(n==0){
        cout << 0 << endl;
        return 0;
    }
    for (int i = 0; i < 12; i++)
    {
        sum += a[i];
        count++;
        if (sum >= n)
        {
            cout << count << endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}