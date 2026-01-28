#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int>x;
 
    x.push_back(80);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
   cout<<"before sort"<<endl;
   for (int i = 0; i < x.size(); i++)
   {
    cout<<x.at(i)<<endl;
   }
   cout<<"after sort"<<endl;
   sort(x.begin(),x.end());
   for (int i = 0; i < x.size(); i++)
   {
    cout<<x.at(i)<<endl;
   }
   
    
    
    return 0;
}