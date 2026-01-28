#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    while (1)
    {
        long long int x;
        cin >> x;
        if(x==-1){
            break;
        }
        vector<int> l;
        while (x>0)
        {
            int rem = x % 3;
            l.push_back(rem);
            x = x / 3;
        }
        for(auto v:l){
            cout << v;
        }
        cout << endl;
    }
    
    return 0;
}