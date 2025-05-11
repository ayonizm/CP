#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s = "codeforces";
    map<char, int> x;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        char p;
        cin >> p;
        if(x[p]>0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    
    return 0;
}