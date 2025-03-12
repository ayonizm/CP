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
        string s1, s2;
        cin >> s1 >> s2;
        int m = min(s1.length(),s2.length());
        if(s1.length()<=s2.length()){
            for (int i = 0; i < m; i++)
            {
                cout << s1[i] << s2[i];
            }
            for (int i =m; i < s2.length(); i++)
            {
                cout << s2[i];
            }
            cout << endl;
        }else{
            for (int i = 0; i < m; i++)
            {
                cout << s1[i] << s2[i];
            }
            for (int i = m; i < s1.length(); i++)
            {
                cout << s1[i];
            }
            cout << endl;
        }
    }
    
    return 0;
}