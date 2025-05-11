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
        int c;
        cin >> c;
        string s;
        cin >> s;
        vector<char> x;
        for (int i = 0; i < c; i++)
        {
            s[i] = tolower(s[i]);
        x.push_back(s[i]);

        }
        string f;
        int l = unique(x.begin(), x.end()) - x.begin();
        for (int i = 0; i < l; i++)
        {
            f += x[i];
        }
        if(f=="meow"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }

        return 0;
}