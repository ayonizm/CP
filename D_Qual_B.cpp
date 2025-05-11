#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int x;
    cin >> x;
    long int r;
    cin >> r;
    string s;
    cin >> s;
    int count=0;
    for (int i = 0; i < s.length(); i++)
    {
    
        if(count==r){
            s[i] = 'x';
        }
        else if(s[i]=='o') {
            count++;
        }
    }
    cout << s << endl;
    return 0;
}