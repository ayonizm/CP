#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    ll k1=0, k2=0;
    for (int i = 0; i < s.length(); i++)
    {
        if((i+1)%2==0){
            k1 = k1 + (s[i] - '0');
        }
        else{
            k2 = k2 + (s[i] - '0');
            
        }
    }
    cout << k1 * k2 << endl;

    return 0;
}