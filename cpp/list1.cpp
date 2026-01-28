#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int>x;
    x.push_back(200);
    x.push_back(103);
    x.push_back(343);
    x.push_back(231);
    x.push_front(23);
    x.pop_front();
    x.pop_back();
    list<int>::iterator beg;
    beg = x.begin();
    advance(beg, 2);
    x.insert(beg, 78);

    // x.clear();
    cout<<x.size()<<endl;
    for (auto it:x)
    {
        cout << it << " ";
    }
       cout<<endl;
    cout<<"front "<<x.front()<<endl;
    cout<<"back "<<x.back()<<endl;

    if (x.empty())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;

    }
    

    
    return 0;
}