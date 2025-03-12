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
        vector<int> lo;
        vector<int> mn;
        for (int i = 1; i <=x; i++)
        {
            int a;
            cin >> a;
            lo.push_back(a);
            mn.push_back(a);
        }
        sort(lo.begin(), lo.end());
        int tar;
        if(lo[0]==lo[1]){
            tar = lo[lo.size() - 1];
        }
        else{
            tar = lo[0];
        }
        for (int i = 0; i < mn.size(); i++)
        {
            if(tar==mn[i]){
                cout << i + 1 << endl;
                break;
            }
        }
        
    }
    
    return 0;
}