#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    map<string, int> p;
    while (n--)
    {
        string s;
        cin >> s;
        if(p[s]==0){
            cout << "OK" << endl;
        }
        else{
            cout << s <<p[s]<< endl;

        }
        p[s]++;
    }
    
    return 0;
}