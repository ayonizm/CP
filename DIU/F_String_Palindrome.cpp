#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    string k = s;
    int t = s.length();
    reverse(s.begin(), s.end());
    int x1 = (s.length() - 1) / 2;
    int x2 = (s.length() +3) / 2;
    string w1 = s.substr(0, x1);
    string k1 = w1;
    reverse(w1.begin(), w1.end());
    string w2 = s.substr(x2-1,t);
    string k2 = w2;
    reverse(w2.begin(), w2.end());

    // cout << w1 << " " << w2 << endl;
    if(s==k&&k1==w1&&k2==w2){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}