#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    queue<int> q;
    stack<int> x;

    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push(temp);
    }
    while (!x.empty())
    {
        q.push(x.top());
        x.pop();
    }
    
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    
    
    
    
    return 0;
}