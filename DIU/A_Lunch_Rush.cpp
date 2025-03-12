#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n, m;
    cin >> n >> m;
    long long int mx;
    long long int a, b;
    cin >> a >> b;
    if(b<=m){
        mx = a;
    }
    else{
        mx = a - (b - m);
    }
    for (long long int i = 0; i < n-1; i++)
    {
        cin >> a >> b;
        if(b<=m){
            if(a>mx){
                mx = a;
            }
        }
        else{
            long long int t = a - (b - m);
            if(t>mx){
                mx = t;
            }
        }
    }
    
    cout <<mx<< endl;
    return 0;
}