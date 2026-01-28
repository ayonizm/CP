#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    int x1 = (a * 2) + (b * 2);
    int x2 = (b * 2) + (c * 2);
    int x3 = (c * 2) + (a * 2);
    vector<int> x;
    int y = a + b + c;
    x.push_back(y);
    x.push_back(x1);
    x.push_back(x2);
    x.push_back(x3);
    sort(x.begin(), x.end());
    cout << x[0];
    return 0;
}