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
        vector<int> l;
        for (int i = 0; i < x; i++)
        {
            int temp;
            cin >> temp;
            l.push_back(temp);
        }
        int k = unique(l.begin(), l.end()) - l.begin();
        if(k==1){
            cout << "YES" << endl;
            continue;
        }
        else{
            
        }
    }
    return 0;
}