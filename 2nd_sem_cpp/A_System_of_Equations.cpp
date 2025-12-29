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
    ll ct = 0;
    for (int i = 0; i <=1000; i++)
    {
        for (int j = 0; j <=1000; j++)
        {
            if(((i*i)+j)==n&&((j*j)+i)==m){
                ct++;
            }
        }
        
    }
    cout << ct << endl;

    return 0;
}