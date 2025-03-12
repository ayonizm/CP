#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a, b;
    cin >> a >> b;
    vector<int> x;
    for (int i = a; i <=b; i++)
    {
        string s=to_string(i);
        int flag = 1;
        
        for (int j = 0; j < s.length(); j++)
        {
            if(s[j]!='4'&&s[j]!='7'){
                flag = 0;
                break;
            }
        }

        if(flag){
            x.push_back(i);
        }
        
        

    }
    if(x.size()==0){
        cout << "-1" << endl;
    }
    else{
        for(auto v:x){
            cout << v << " ";
        }
    }
    
    return 0;
}