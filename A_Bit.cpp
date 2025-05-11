#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count=0;  
    while (n--)
    {
        string s;
        cin >> s;
        if(s=="X++"||s=="++X"){
            count++;
        }
        else{
            count--;
        }
        
    }
    cout << count;

    return 0;
}