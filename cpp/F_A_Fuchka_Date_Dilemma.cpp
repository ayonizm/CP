#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b;
    cin >> a >> b;
    vector<ll> x1;
    vector<ll> x2;
    vector<pair<ll, ll>> x;
    for (int i = 0; i < a; i++)
    {
        int t;
        cin>>t;
        x1.push_back(t);
    }
    for (int i = 0; i < a; i++)
    {
        int t;
        cin>>t;
        x2.push_back(t);
    }
    for (int i = 0; i < a; i++)
    {
        if(x2[i]>=b){

        x.push_back({x1[i], x2[i]});
        }
    }
    if(x.size()==0){
        cout << "Bad Luck!" << endl;
        return 0;
    }
    sort(x.begin(), x.end());
    cout << x[0].first << endl;

    return 0;
}