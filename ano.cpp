#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int x1 = a * b;
    int x2 = (a / 2)*4;
    int x3 = d + x1 + x2;
    if(x3<=e){
        cout << "Congratulations Ichigo" << endl;
    }
    else{
        cout << "Ichigo will Die single" << endl;

    }

    return 0;
}