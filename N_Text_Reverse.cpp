#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    
    int n;
    cin >> n;
    n++;
    string s;
    while (n--)
    {
        getline(cin, s);
        string v;
        for (auto f:s){
           
            if(isspace(f))
            {
                reverse(v.begin(), v.end());
                cout << v<<" ";
                v.clear();
            }
            else{
                v += f;
            }
            
            
        }

        reverse(v.begin(), v.end());
        cout << v << endl;
        v.clear();
                
    }
    
    return 0;
}