#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    vector<int> x;
    for (int i = 1; i <=n; i++)
    {
        x.push_back(i);
    }
    reverse(x.begin() + a-1, x.begin() + b );
    reverse(x.begin() + c -1, x.begin() + d);
    for(auto v:x){
        cout << v << " ";
    }

    return 0;
}