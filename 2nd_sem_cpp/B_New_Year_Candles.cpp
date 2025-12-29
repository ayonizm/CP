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
    ll n, m;
    cin >> n >> m;
    int s = 0;
        s+=n;
    while (1)
    {
        if(n==0){
            break;
        }
        n = n / m;
        s += n;

    }

    cout << s << endl;

    return 0;
}