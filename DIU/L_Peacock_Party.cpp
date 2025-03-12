#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    queue<string> x;
    while (n--)
    {
        int t;
        cin >> t;
        string s;
        if (t==1)
        {
        cin >> s;
            x.push(s);
        }
        else{
            cout << x.front() << endl;
            x.push(x.front());
            x.pop();
        }
        
    }
    
    return 0;
}