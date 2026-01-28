#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
bool isbalance(char x,char y){
    return (x == '[' && y == ']' || x == '{' && y == '}' || x == '(' && y == ')');
}
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        stack<char>x;
        int done =0;
        for(auto c:s){
            if(c=='['||c=='('||c=='{')
            {
                x.push(c);
            }
            else{
                if(x.empty()){
                    done = 1;
                    break;
                }
                else{
                    if(isbalance(x.top(),c)){
                        x.pop();
                    }
                    else{
                        done = 1;
                        break;
                    }
                }
            }
        }
        if(!x.empty()){
            done = 1;
        }
        if(done==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;

        }
    }
    
    return 0;
}