#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> x;
        int a, b, c;
        cin >> a >> b >> c;
        x.push_back(a);
        x.push_back(b);
        x.push_back(c);
        sort(x.begin(), x.end());
        cout << x[1] << endl;
    }
    
    return 0;
}