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
        string s;
        cin >> s;
        string k = s.substr(0, 2);
        int x = stoi(k);
        if(x>12){
            k = to_string(x - 12);
            s[0] = k[0];
            s[1] = k[1];
            cout << s << "PM" << endl;
        }
        
    }
    
    return 0;
}