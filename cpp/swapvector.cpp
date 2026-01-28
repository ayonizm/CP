#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int>x1;
    vector<int>x2;
 
    x1.push_back(80);
    x1.push_back(20);
    x1.push_back(30);
    x1.push_back(40);
    x1.push_back(1000);
    x1.push_back(320);
    x1.push_back(360);
    x1.push_back(30);
    x1.push_back(490);

    sort(x1.begin(), x1.end());
    // reverse(x1.begin(), x1.end());
    reverse(x1.begin(), x1.end());
    for (int i = 0; i < x1.size(); i++)
    {
        cout<<x1.at(i)<<endl;
    }
    
    
    return 0;
}