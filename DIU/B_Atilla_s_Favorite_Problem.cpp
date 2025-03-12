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
        int f;
        cin >> f;
        string s;
        cin >> s;
        int max = s[0]-'a';
        for (int i = 0; i < f; i++)
        {
            int l = s[i]-'a';
            if(l>max){
                max = l;
            }
        }
        cout << max+1 << endl;
        
    }
    
    return 0;
}