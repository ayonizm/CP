#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s1 = "codeforces";
    while (n--)
    {
        int count = 0;
        string s2;
        cin >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]!=s2[i]){
                count++;
            }
        }
        cout << count << endl;
        
    }
    
    return 0;
}
