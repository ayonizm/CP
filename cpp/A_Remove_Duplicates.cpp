#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    unordered_map<int, int> x;
    stack<int> l;
    vector<int> f;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        l.push(temp);
    }
    
    while (!l.empty())
    {
        
        if(x[l.top()]==0){
            f.push_back(l.top());
            x[l.top()]++;
            l.pop();
        }
        else{

            x[l.top()]++;
            l.pop();
        }
    }
   
    cout << f.size() << endl;
    for (int i = f.size()-1; i >= 0; i--)
    {
        cout << f[i] << " ";
    }
    return 0;
}