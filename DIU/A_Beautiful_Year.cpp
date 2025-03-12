#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = n+1;; i++)
    {
        string s = to_string(i);
        set<char> x;
        for (int i = 0; i < s.length(); i++)
        {
            x.insert(s[i]);
        }
        if(x.size()==4){
            cout << i << endl;
            break;
        }
    }
    
    return 0;
}