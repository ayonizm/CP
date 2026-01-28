#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    vector<ll> x;
    while (n--)
    {
        ll temp;
        cin >> temp;
        x.push_back(temp);
    }
    ll m = x[0];
    ll k = m;
    int pos;
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]>m){
            m = x[i];
            pos = i + 1;
            break;
        }
    }
    if(m!=k){
        cout << pos << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}