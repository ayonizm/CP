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
    string s;
    cin >> s;
    ll pr[s.length()];
    pr[0] = 0;
    ll sum = 0;
    for (int i = 1; i < s.length(); i++)
    {
        if(s[i]==s[i-1]){
            sum++;
        }
        pr[i] = sum;
    }
    

    // for(auto v:pr){
    //     cout << v << " ";
    // }
    // cout << endl<< "quary answer" << endl;
    ll n;
    cin >> n;
    while (n--)
    {
        ll a, b;
        cin >> a >> b;
        cout << (pr[b-1] - pr[a-1]) << endl;
        
    }
    

    

    return 0;
}