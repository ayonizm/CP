#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int sum(vector<int> l){
    int s = 0;
    for (int i = 0; i < l.size(); i++)
    {
        s += l[i];
    }
    
    return s;
}
int main()
{
    op();
    int n;
    cin >> n;
    while (n--)
    {
        
        int a, b;
        cin >> a >> b;
        vector<int> x;
        while (a--)
        {
            int temp;
            cin >> temp;
            x.push_back(temp);
        }
        if(sum(x)<b){
            cout << "-1" << endl;
            continue;
        }
        else if(sum(x)==b){
            cout << "0" << endl;
            continue;
        }
        vector<vector<int>> d;
        vector<int> tr;
        for (int i = 0; i < x.size(); i++)
        {
            for (int j = 0+i; j < x.size(); j++)
            {
                for (int k = i; k <=j; k++)
                {
                    tr.push_back(x[k]);
                    if(sum(tr)==b){
                        d.push_back(tr);
                    }
                }
                
            }
            
        }
        for (int i = 0; i < d.size(); i++)
        {
            for (int j = 0; j < d[i].size(); j++)
            {
                cout << d[i][j] << " ";
            }
            cout << endl;
        }
        
        
    }
    
    return 0;
}