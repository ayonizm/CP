#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;

        string s;
        cin >> s;
        if(x!=5){
            cout << "NO" << endl;
            continue;
        }
        map<char, int> l;
        for (int i = 0; i < x; i++)
        {
            l[s[i]]++;
        }
        string t = "Timur";
        int flag = 1;
        for (int i = 0; i < x; i++)
        {
            if(l[t[i]]!=1){
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
    }
    
    return 0;
}