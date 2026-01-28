#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='A'){
            count1++;
        }
        else{
            count2++;
        }
    }
    
    if(count1>count2){
        cout << "Anton" << endl;
    }
    else if(count2>count1){
        cout << "Danik" << endl;
    }
    else{
        cout << "Friendship" << endl;
    }
    return 0;
}