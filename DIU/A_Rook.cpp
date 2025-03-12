#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    
    ll n;
    cin>>n;
    while (n--)
    {
        string s;
        cin >> s;
        int x = 'a';
        int t = s[1]-'0';
        for (int i = 1; i <=8 ; i++)
        {
            if(t==i){
                continue;
            }
            cout << s[0] << i<< endl;
        }
        char yt = s[1];
        for (int i = 1; i <= 8; i++)
        {
            if((char)x==s[0]){
                x++;
                continue;
            }
            cout <<(char)x << yt<< endl;
            x++;
        }
    }
    
    return 0;
}