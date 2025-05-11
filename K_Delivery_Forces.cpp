#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n; 
    cin >> n;
    vector <ll> v;
    for (int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    deque <ll> m;
    for(int i =0; i < n; i++){
        m.push_front(v[i]);    
    }
    ll evai = 0;
    for(int j = 0; j < n/3; j++){
        m.pop_front();
        m.pop_back();
        evai += m.front();
        m.pop_front();
    }
    cout << evai;
    return 0;
}
