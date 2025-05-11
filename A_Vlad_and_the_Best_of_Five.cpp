#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int c1 = 0;
        int c2 = 0;
    string s;
    cin >> s;
    for (int j = 0; j < 5; j++)
    {
        if(s[j]=='A'){
            c1++;
        }
        else{
            c2++;
        }
    }
        if(c1>c2){
            cout << "A" << endl;
        }
        else{
            cout << "B" << endl;
        }
    
    }
    

    return 0;
}