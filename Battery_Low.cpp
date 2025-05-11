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
        int x;
        cin >> x;
        if(x<=15){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
    return 0;
}