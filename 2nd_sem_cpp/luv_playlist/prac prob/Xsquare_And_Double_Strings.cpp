#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll t;
    cin>>t;
    while (t--)
    {
        map<char, int> mp;
        string s;
        cin >> s;
        bool f = false;
        for (int i = 0; i < s.length(); i++)
        {
            
            mp[s[i]]++;
            if(mp[s[i]]>1){

                cout << "Yes" << endl;
                f = true;
                break;
            }
        }
        if(!f){

        cout << "No" << endl;
        }
        

    }
    
    return 0;
}