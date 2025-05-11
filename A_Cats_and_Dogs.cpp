#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    int x = b - a;
    int y = a + x;
    if((a+b)>=c&&a<=c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}