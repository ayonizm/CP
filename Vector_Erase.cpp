#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        x.push_back(temp);

    }
    int single;
    cin>>single;
    x.erase(x.begin() + single-1);
    int ei,oi;
    cin>>ei>>oi;
    x.erase(x.begin() + ei-1,x.begin()+oi-1);
    cout<<x.size()<<endl;
    for (int i = 0; i < x.size(); i++)
    {
        cout<<x.at(i)<<" ";
    }
    
    return 0;
}