#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
bool cmp(const long long int a,const long long int b ){
    return b < a;
}
int main()
{
    op();
    int te;
    cin>>te;
    while(te--){
        int n,m;
    cin>>n>>m;
    long long sum=0;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    for(int i=0;i<m;i++){
        int temp;
        cin>>temp;
        pq.pop();
        pq.push(temp);
    }
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    cout<<sum<<endl;

    }
    return 0;
}