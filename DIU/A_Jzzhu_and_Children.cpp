#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    int x;
    cin >> n >> x;
    deque<pair<int,int>> l;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        l.push_back({tem,i+1});
    }
    while (!l.empty())
    {
        
        if (l.front().first<=x)
        {
            if(l.size()==1){
            cout << l.front().second << endl;
        }
            l.pop_front();
        }
        else{
            int f =l.front().first-x;
            l.push_back({f,l.front().second});
            l.pop_front();
        }
    }
    
    return 0;
}