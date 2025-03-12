#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll x;
    cin >> x;
    string k = to_string(x);
    ll sum = 0;
    for (int i = 0; i < k.length(); i++)
    {
        sum += k[i] - '0';
    }
    if(x%sum==0){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    
    return 0;
}