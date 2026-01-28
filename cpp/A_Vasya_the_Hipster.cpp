#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n, m;
    cin >> n >> m;
    vector<int> x;
    x.push_back(n);
    x.push_back(m);
    sort(x.begin(), x.end());
    int sum = x[0];
    int a = x[1] - x[0];
    int f=(a / 2);
    cout << sum << " " << f;

    return 0;
}