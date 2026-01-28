#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, bool> x;
    while (n--)
    {
        string temp;
        cin >> temp;
        if(x[temp]==1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
            x[temp] = true;
        }
    }
    
    return 0;
}