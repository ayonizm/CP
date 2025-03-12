#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    char s[100];
    cin >> s;
    char t[100];
    cin >> t;
    for (int i = 0; i < strlen(s); i++)
    {
        s[i] = tolower(s[i]);
    }
    for (int i = 0; i < strlen(t); i++)
    {
        t[i] = tolower(t[i]);
    }
    cout << strcmp(s, t)<<endl;
    return 0;
}
