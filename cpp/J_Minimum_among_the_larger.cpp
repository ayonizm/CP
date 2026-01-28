#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = n+1; ; i++)
    {
        if(i%7==0){
            cout << i;
            break;
        }
    }
    
    return 0;
}