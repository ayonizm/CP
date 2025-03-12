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
        int x, y;
        map<char, int> l;
        vector<string> ay;
        for (int i = 0; i < x; i++)
        {
            string s;
            cin >> s;
            ay.push_back(s);
            for (int j = 0; j < y; j++)
            {
                l[s[j]]++;
            }
            
        }
        int a = l['v'] + l['i'] + l['k'] + l['a'];
        if(a==4){
            cout << "YES" << endl;
            continue;
        }
        
        
    }
    
    return 0;
}