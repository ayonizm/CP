#include<bits/stdc++.h>
using namespace std;
#define op()ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    /**************************************************************************** */
    stack<int> x;
    x.push(2);
    x.push(3);
    x.push(1);
    x.push(7);
    cout << x.size() << endl;
    while (!x.empty())
    {
        cout<<x.top()<< endl;
        x.pop();
    }
    

    return 0;
}