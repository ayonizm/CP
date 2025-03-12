#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    /****************************************************************** */
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(9);
    q.push(6);
    // cout << q.front() << endl;
    // cout << q.front() << endl;
    while (!q.empty())
    {
    cout << q.front() << endl;
    q.pop();
        
    }
    

    
    return 0;
}