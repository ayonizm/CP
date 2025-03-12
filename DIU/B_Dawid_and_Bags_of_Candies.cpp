#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if((a+b)==(c+d)){
        cout << "YES" << endl;
    }
    else if((a+c)==(b+d)){

        cout << "YES" << endl;
    }
    else if((a+d)==(b+c)){
        cout << "YES" << endl;

    }
    else if(a+b+c==d||b+c+d==a||a+c+d==b||a+b+d==c){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}