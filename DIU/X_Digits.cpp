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
        for (int i = s.length()-1; i >=0; i--)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}