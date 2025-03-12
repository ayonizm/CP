#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if((s[i]-'0')==5){
            k++;
        }
    }
    cout << k << endl;

    return 0;
}