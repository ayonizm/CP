#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
        set<string> x;
        char t;
        while (cin >> t)
        {
            getline(cin, s);
            s = t + s;
             s.erase(remove(s.begin(), s.end(), '.'), s.end());
            s.erase(remove(s.begin(), s.end(), '"'), s.end());
            s.erase(remove(s.begin(), s.end(), ':'), s.end());
            
            string temp;
            for(auto u:s){
                if(isspace(u)){
                    x.insert(temp);
                    
                    temp.clear();
                }
                else{
                    temp = temp + u;
                }
            }
            x.insert(temp);
            for(auto v:x){
                cout << v << endl;
            }
        }
        
        

        return 0;
}