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
    while(n--){
        ll p;
        cin >> p;
        vector<int> x(p);
        for (int i = 0; i < p; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < p/2; i++)
        {
            cout << x[i] << " " << x[p - i - 1]<<" ";
        }
        if(p%2!=0){
            cout << x[(p / 2)];
        }
        cout << endl;
    }

    return 0;
}