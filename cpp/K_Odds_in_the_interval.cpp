#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n, m;
    cin>> n>> m;
    for (int i = n; i <= m; i++)
    {
        if(i%2!=0){
            cout << i << " ";
        }
    }
    
    return 0;
}