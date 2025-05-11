#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    map<pair<int,int>,int> x;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        x[{a, b}]++;
    }
    int count=0;
    int flag = 0;
    for(auto v:x){
        if(v.second>1){
            count+=v.second;
            flag = 1;
        }
        
    }
    if (flag)
    {
    cout << count;
    }
    else{
        cout << "1";

    }
    
    return 0;
}