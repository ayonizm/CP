#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    map<string,int> x;
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        x[s]++;
    }
    for(auto v:x){
        cout << v.first << " " << v.second << endl;
    }
    
    

    return 0;
}