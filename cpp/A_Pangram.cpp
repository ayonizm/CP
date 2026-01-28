#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char x;
        cin >> x;
        x = tolower(x);
        count[x - 'a']++;
    }
    int flag = 1;
    for (int i = 0; i < 26; i++)
    {
        if(count[i]==0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}