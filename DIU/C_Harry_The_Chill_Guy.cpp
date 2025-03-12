#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s = "NevilleLongbottom";
    int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
        sum = sum + (s[i] - 'a'+1);
    }
    cout << sum << endl;
    return 0;
}