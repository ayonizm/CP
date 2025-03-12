#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    int a = x4 - x3;
    int b = x4 - x2;
    int c = x4 - x1;
    cout << a << " " << b << " " << c;
    return 0;
}