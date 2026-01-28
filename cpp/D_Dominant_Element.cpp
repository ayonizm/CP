#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    
    while (n--)
    {
        map<ll, ll> x;
        ll a;
        cin >> a;
        int flag = 1;
        while (a--)
        {
            ll temp;
            cin >> temp;
            x[temp]++;
        }
        int count = 0;
        int max = 0;
        for(auto v:x){
            if(v.second>=max){
                max = v.second;
            }
            // cout << v.second << " ";
        }
        for(auto v:x){
            if(max==v.second){
                count++;
            }
        }
        if(count!=1){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        // cout << endl;
    }
    
    return 0;
}