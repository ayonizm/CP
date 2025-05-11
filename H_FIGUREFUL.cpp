#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    pair<int, int> ayon;
    map<pair<int,int>,string> x;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        ayon.first = a;
        ayon.second = b;
        string s;
        cin >> s;
        x[ayon] = s;
    }
    
    int m;
    cin >> m;
    while (m--)
    {
        int op1, op2;
        cin >> op1 >> op2;
        cout << x[{op1,op2}] << endl;
    }
    

    return 0;
}