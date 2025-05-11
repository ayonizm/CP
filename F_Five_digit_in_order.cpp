#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    string k = s;
    sort(s.begin(), s.end());
    int l = unique(s.begin(), s.end()) - s.begin();
    if(s==k&&l==s.length()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}