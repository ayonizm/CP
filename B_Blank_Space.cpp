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
        int f;
        cin >> f;
        vector<int> x;
        map<int, int> x1;

        for (int i = 0; i < f; i++)
        {
            int t;
            cin >> t;
            x.push_back(t);
            x1[t]++;
        }
        
    int count = 0;
    int pos = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]==1)
        {
            if(count>pos){
                pos = count;
            }
            count = 0;
        }
        else{
            count++;
        }
        
    }
    if(x[x.size()-1]==0){
        if(count>pos){
            pos=count;
        }
    }
    cout << pos << endl;
    x.clear();
    }
    
    
    return 0;
}