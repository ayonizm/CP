#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k = 0;
    int i = 0;
    while (k<n)
    {
        cout << s[k];
        k = k + 2 + i;
        i++;
    }
    return 0;
}