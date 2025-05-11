#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 100; i < 1000; i++)
    {
        string k = to_string(i);
        int a = k[0] - '0';
        int b = k[1] - '0';
        int c = k[2] - '0';
        int p=a+b+c;
        if(p==n){
            x.push_back(i);
        }
    }
    cout << x.size() << endl;
    for(auto v:x){
        cout << v << endl;
    }

    return 0;
}