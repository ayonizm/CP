#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll k = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='+'){
            k++;
        }
        else{
            k--;
        }
    }

    cout << k << endl;
    return 0;
}