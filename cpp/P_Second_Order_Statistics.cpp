#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    vector<int> y;
    
    
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    int flag = 0;
    for(int i=1;i<n;i++)
    {
        if(x[i]>x[i-1])
        {
            cout<<x[i];
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout << "NO" << endl;
    }
    return 0;
}