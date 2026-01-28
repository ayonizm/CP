#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int gc(int a,int b){
    if(b==0){
        return a;
    }
    gc(b, a % b);
}
int main(){
    op();
    int x, y;
    cin >> x >> y;
    cout << gc(x, y);
    return 0;
}