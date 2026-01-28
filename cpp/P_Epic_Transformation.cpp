#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int n;
    cin>>n;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        mp[x]++;
    }
    priority_queue<int>q;
    for(auto i : mp){
        q.push(i.second);
    }
    while(q.size()>=2){
        int a=q.top();
        q.pop();
        int b=q.top();
        q.pop();
        a--;
        b--;
        if(a){
        q.push(a);

        } 
        if(b){
        q.push(b);

        } 
    }
    if(q.size()==0){
        cout<<0<<"\n";
    }
    else{
        cout<<q.top()<<"\n";
    }
    }
    
    return 0;
}