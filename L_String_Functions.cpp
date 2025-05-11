#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    cin >> x >> y;
    string s;
    cin >> s;
    while (y--)
    {
        string k;
        cin >> k;
        if(k=="substr"){
            int a,b;
            cin >> a >> b;
            string l = s.substr(a-1, b);
            cout << l << endl;
        }
        else if(k=="sort"){
            int a, b;
            cin >> a >> b;
            sort(s.begin() + a, s.begin() + b);
            // cout << s << endl;
        }
        else if(k=="pop_back"){
            s.pop_back();
        }
        else if(k=="back"){
            cout << s.back() << endl;
        }
        else if(k=="reverse"){
            int a, b;
            cin >> a >> b;
            reverse(s.begin() + a-1, s.begin() + b+1);
            // cout << s << endl;
        }
        else if(k=="front"){
            cout << s.front() << endl;
        }
        else if(k=="push_back"){
            char t;
            cin >> t;
            s.push_back(t);
        }
        else if(k=="print"){
            int u;
            cin >> u;
            cout << s[u] << endl;
        }
    }
    
    return 0;
}