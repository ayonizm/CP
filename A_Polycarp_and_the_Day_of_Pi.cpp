#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string t = "314159265358979323846264338327";
    int n;
    cin >> n;
    while (n--)
    {
        int count = 0;
        string s;
        cin >> s;
        for (int i = 0; i <s.length(); i++)
        {
            if(s[i]==t[i]){
                count++;
            }
            else{
                break;
            }
        }
        cout << count << endl;
    }
    
    return 0;
}