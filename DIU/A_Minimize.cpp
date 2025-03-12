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
        ll a, b;
        cin >> a >> b;
        vector<int> o;
        for (int i = a; i <=b; i++)
        {
            ll p = (i - a) + (b - i);
            o.push_back(p);
        }
        cout << *min_element(o.begin(), o.end()) << endl;
        
    }
    
    return 0;
}