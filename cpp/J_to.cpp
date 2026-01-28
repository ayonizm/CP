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
    if(n==1){
        cout << 1 << endl;
        return 0;
    }
    if(n<=3){
        cout << "NO SOLUTION" << endl;
    }
    else{
        for (int i = n; i >= 1; i--)
        {
            if (i %2== 1){

                cout << i << " ";
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (i % 2 == 0){
                cout << i << " ";
            }
        }
    }

    return 0;
}