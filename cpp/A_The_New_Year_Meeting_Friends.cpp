#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<int> x;
    for (int i = 0; i < 3; i++)
    {
        int l;
        cin >> l;
        x.push_back(l);
    }
    sort(x.begin(), x.end());
    int a = x[1] - x[0];
    int b = x[2] - x[1];
    int c = x[2] - x[0];
    x.clear();
    x.push_back(a);
    x.push_back(b);
    x.push_back(c);
    sort(x.begin(), x.end());
    cout << x[0] + x[1];
    return 0;
}