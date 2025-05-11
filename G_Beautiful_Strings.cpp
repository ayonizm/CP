#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    map<char, int> x;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if(x[s[i]]%2!=0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}