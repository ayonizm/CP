#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int

int main(){
    op();
    ll x;
    cin >> x;
    while (x--)
    {
        ll c;
        cin >> c;
        string s;
        cin >> s;
        bool mira=false;
        for (int i = 0; i < c; i++)
        {
            string s1 = s.substr(i, 2);
            for (int j = 2+i; j <c ; j++)
            {
                string s2 = s.substr(j, 2);
                if(s1==s2){
                    mira = true;
                    break;
                }
            }
            if(mira){
                break;
            }
            
        }
        if(mira){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}