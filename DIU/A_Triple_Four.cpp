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
void solve(){
    int a;
    cin >> a;
    vector<int> x;
    for (int i = 0; i < a; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    for (int i = 0; i < a-2; i++)
    {
        if(x[i]==x[i+1]&&x[i+1]==x[i+2]){
            Yes;
            return;
        }
    }
    No;
    return;
}
int main(){
    op();
    
        solve();
    

    return 0;
}