#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = n;; i++)
    {
        string s=to_string(i);
        int sum = 0;
        for (int i = 0; i < s.length(); i++)
        {
            sum += (s[i] - '0');
        }
        if(sum%4==0){
            cout << i << endl;
            break;
        }
        
    }
    
    return 0;
}