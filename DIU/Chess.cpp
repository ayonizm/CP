#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n, m;
    cin >> n >> m;
    n = n + m;
    if(n%2==0){
        cout << 1 << endl;
    }
    else{
        cout << 0 << endl;
    }
    return 0;
}