#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    cin >> x >> y;
    int y1 = (x - y)/2;
    int x1 = x - y1;
    cout << x1 << " "<< y1;
    return 0;
}