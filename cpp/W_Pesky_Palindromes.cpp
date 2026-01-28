#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string k;
    while(cin >> k){
        set<string> s;
    
    for (int i = 0; i < k.length(); i++)
    {
        for (int j = 0; j < k.length(); j++)
        {
            string l = k.substr(i, j+1);
            s.insert(l);
        }
    }
    int count=0;
    for(auto v:s){
        string e = v;
        reverse(e.begin(), e.end());
        if(v==e){
            count++;
        }
    }
    cout << "The string '" << k << "' " << "contains " << count << " palindromes." << endl;
    
    }
    
    return 0;
}