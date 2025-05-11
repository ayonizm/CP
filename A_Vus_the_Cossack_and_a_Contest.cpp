#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    if(b>=a&&c>=a){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}