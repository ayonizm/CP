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
    ll a;
    cin >> a;
    ll b;
    cin >> b;
    map<pair<int, char>, int> x;
    for (int i = 0; i < b; i++)
    {
        int p;
        cin >> p;
        char c;
        cin >> c;
        if(x[{p,c}]==0&&c=='M'){
            Yes;
        }
        else{
            No;
        }
        x[{p, c}]++;
    }
    

    return 0;
}