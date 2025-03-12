#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n, m;
    cin >> n >> m;
    map<string, string> x;
    while (m--)
    {
        string s;
        cin >> s;
        string k;
        cin >> k;
        x[s] = k;
    }
    vector<string> c;
    while (n--)
    {
        string l;
        cin >> l;
        if(x[l].length()==l.length()){
            cout << l << " ";
        }
        else if(x[l].length()<l.length()){
            cout << x[l] << " ";
        }
        else{
            cout << l << " ";
        }
    }
    
    
    return 0;
}