#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main(){
    op();
    string al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    map<char, int> x;

    for (int i = 0; i < al.length(); i++)
    {
        x[al[i]]=i+1;
    }
    int n;
    cin >> n;
    
    while (n--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        
        map<char, int> po;
        int cnt = 0;
        vector<char> lo;
        for (int i = 0; i < s.length(); i++)
        {
            po[s[i]]++;
            lo.push_back(s[i]);
        }
        sort(lo.begin(), lo.end());
        int y = unique(lo.begin(), lo.end()) - lo.begin();
        for (int i = 0; i < y; i++)
        {
            if(po[lo[i]]>=x[lo[i]]){
                cnt++;
            }
        }
        
        cout << cnt << endl;
    }
    
    return 0;
}