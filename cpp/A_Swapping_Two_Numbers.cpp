#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    while (1)
    {
        int a, b;
        cin >> a >> b;
        if(a==0&&b==0){
            break;
        }
        vector<int> x;
        x.push_back(a);
        x.push_back(b);
        sort(x.begin(), x.end());
        cout << x[0] << " " << x[1] << endl;
    }
    
    return 0;
}