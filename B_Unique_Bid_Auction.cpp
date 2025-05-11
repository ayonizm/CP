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
        vector<pair<int,int>> l;
        map<int, int> p;
        for (int i = 1; i <= x; i++)
        {
            int po;
            cin >> po;
            l.push_back({po,i});
            p[po]++;
        }
        sort(l.begin(), l.end());
        int k = unique(l.begin(), l.end()) - l.begin();
        int flag = 0;
        for (int i = 0; i < k; i++)
        {
            if(p[l[i].first]==1){
                cout << l[i].second << endl;
                flag = 1;
                break;
            }
        }
        if(flag==0){
            cout << "-1" << endl;
        }
    }
    
    return 0;
}