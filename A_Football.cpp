#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int count1 = 0;
    int count2 = 0;
    int j = 1;
    int flag = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        if(s[i]==s[j]){
            count1++;
        }
        else{
            count1 = 0;
        }
        if(count1==6){
            flag = 1;
            break;
        }
        j++;
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}