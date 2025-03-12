#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a==1){
        cout << "YES" << endl;
        return 0;
    }
    else{
        int sum =d+ b + c;
        if(sum<=1){
            cout << "NO"<<endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}