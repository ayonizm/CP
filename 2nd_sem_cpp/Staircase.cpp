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
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j <n-1 ; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i+1; k++)
        {
            cout << "#";
        }
        
        cout << endl;
    }
    

    return 0;
}