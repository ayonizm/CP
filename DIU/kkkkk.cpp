#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    vector<int>x;
    int n;
    cin>>n;
    while(n--){
        int k;
        cin>>k;
        x.push_back(k);
    }
    vector<int> p;
    for (int i = 0; i < x.size(); ++i)
    {
       if(i%2!=0){
           p.push_back(x[i]);
       }
            
 
    }
    
    for(auto v:p){
        cout<<v<<" ";
    }
    return 0;

}