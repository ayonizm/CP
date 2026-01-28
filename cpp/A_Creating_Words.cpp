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
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        char temp=s1[0];
        s1[0] = s2[0];
        s2[0] = temp;
        cout << s1 << " " << s2 << endl;
    }
    
    return 0;
}