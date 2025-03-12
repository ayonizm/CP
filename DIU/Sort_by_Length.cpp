#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {

        getline(cin, s);
        vector<string> t;
        string k="";
        for (int i = 0; i < s.length(); i++)
        {
            if(s[i]!=' '){
                k = k + s[i];
            }
            else{
                t.push_back(k);
                k.clear();
                
            }
        }
        t.push_back(k);
        for (int i = 0; i < t.size()-1; i++)
        {
            for (int j = i+1; j < t.size(); j++)
            {
                if(t[i].length()<t[j].length()){
                    swap(t[i], t[j]);
                }
            }
            
        }
        for(auto v:t){
            cout << v << " ";
        }
        cout << endl;
    }
    
    
    return 0;
}