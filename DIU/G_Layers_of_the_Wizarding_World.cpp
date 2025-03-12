#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    stack<int> x;
    int l;
    cin >> l;
    while (l--)
    {
        int t;
        cin >> t;
        x.push(t);
    }
    while (!x.empty())
    {
        cout << x.top() << " ";
        x.pop();
    }
    
    
    return 0;
}