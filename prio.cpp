#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> x;
    x.push(10);
    x.push(220);
    x.push(380);
    x.push(40);
    x.push(1150);
    x.push(60);
    // x.pop();
    // cout << x.top() << endl;
    while (!x.empty())
    {
        cout << x.top() << endl;
        x.pop();
    }
    
    return 0;
}