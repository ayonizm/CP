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
        
    int a, b, c;
    cin >> a >> b >> c;
    if(a>b&&b>c&&a>c){
        cout << "YES" << endl;
        continue;
    }
    if(a<b&&b<c&&a<c){
        cout << "YES" << endl;
        continue;
    }
    


    }
    
    
    return 0;
}