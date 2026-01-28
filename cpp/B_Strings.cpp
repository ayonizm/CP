#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    cout << s1.length() << " " << s2.length() << endl;
    cout << s1 << s2<<endl;
    string s3 = s1 + s2;
    char siam;
    siam = s1[0];
    s1[0] = s2[0];
    s2[0] = siam;
    cout << s1 << " " << s2;
    return 0;
}