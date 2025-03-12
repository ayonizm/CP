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
        int a;
        cin >> a;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        int count = 0;
        for (int i = 0; i < a; i++)
        {
            if(s1[i]==s2[i]&&s1[i+1]!=s2[i+1]){
                count++;
            }
            else{
                continue;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}