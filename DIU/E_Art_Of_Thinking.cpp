#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    vector<ll> x;
    ll n;
    cin >> n;
    map<ll, ll> p;
    while (n--)
    {
        ll temp;
        cin >> temp;
        if(p[temp]==0){
            x.push_back(temp);
            p[temp]++;
        }

    }
    if(x.size()==1){
        cout << "-1" << endl;
        return 0;
    }
    sort(x.begin(), x.end());
    cout << x[x.size() - 2]<<endl;

    return 0;
}