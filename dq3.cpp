#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
    x.push_back(50);
    x.push_back(60);
    x.push_back(70);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x.at(i) << endl;
    }
    
    deque<int>::iterator it,it2;
    it = x.begin();
    it2 = x.begin();
    advance(it, 1);
    advance(it2, 5);
    // x.insert(it,3,909);
    x.erase(it, it2);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x.at(i) << endl;
    }


    return 0;
}