#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int ar;
    cin >> ar;
    int rem;
    cin >> rem;
    int l = ar + rem;
    vector<int> xo;
    xo.push_back(l);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        l = l - x;
        l = l + y;
        xo.push_back(l);
    }
    sort(xo.begin(), xo.end());
    cout << xo[n - 1] << endl;
    return 0;
}