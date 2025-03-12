#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string f;
    string b;
    cin >> f;
    cin >> b;
    int l, m;
    cin >> l >> m;
    while (m--)
    {
        string temp1, temp2;
        cin >> temp1;
        cin >> temp2;
        int k = temp1.find(f);
        // cout << k << endl;
        if(k!=string::npos&&temp2==b){
            cout << "Guilty" << endl;
        }
        else if(k!=string::npos&&temp2!=b){
            cout << "Suspected" << endl;
        }
        else{
            cout << "Not guilty" << endl;
        }
        // cout << temp1 << " " << temp2 << endl;
    }
    
    return 0;
}