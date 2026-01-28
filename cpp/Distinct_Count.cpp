#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    int c, g;
    cin >> c >> g;
    vector<int> x;
    while(c--)
    {
        int y;
        cin >> y;
        x.push_back(y);
    }
    sort(x.begin(), x.end());
    int l = unique(x.begin(), x.end()) - x.begin();
    if(l==g)
    {
        cout << "Good" << endl;
    }
    else if(l>g)
    {

        cout << "Average" << endl;
    }
    else{
        cout << "Bad" << endl;

    }
}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    
    return 0;
}