#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int

int main(){
    op();
    int a, b;
    cin >> a >> b;
    vector<int> x;
    for (int i = 0; i < a; i++)
    {
        int p;
        cin >> p;
        x.pb(p);
    }
    while (b--)
    {
        int k;
        cin >> k;
        ll y = -1;
        for (int i = 0; i < x.size(); i++)
        {
            if(k==x[i]){
                y = i;
                break;
            }
        }
        cout << y+1 << " ";
        x.erase(x.begin() + y);
        x.insert(x.begin(), k);
    }
    
    

    return 0;
}