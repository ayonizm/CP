#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char, int> x;
    set<char> l;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
        l.insert(s[i]);
    }
    int flag = 1;
    for (int i = 0; i < s.length(); i++)
    {
        if(x[s[i]]%n!=0){
            flag = 0;
            break;
        }
    }

    if(flag==0){
        cout << "-1" << endl;
    }
    else{
        string p;
        for(auto v:l){
            p += v;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<p;
        }
        
    }
    

    return 0;
}