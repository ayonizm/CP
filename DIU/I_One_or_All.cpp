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
    while (n--)
    {
        ll p;
        cin >> p;
        vector<ll> x;
        while (p--)
        {
            ll k;
            cin >> k;
            x.push_back(k);
        }
        ll oi = *min_element(x.begin(), x.end());
        ll k1 = 0;
        int f = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if(x[i]!=oi){
                f++;
                k1 += x[i];
            }
        }
        if(k1%2==0&&f!=1){
            cout << "CHEF" << endl;
        }
        else{
            cout << "CHEFINA" << endl;
        }
        
    }
    

    return 0;
}