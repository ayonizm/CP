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
    
    deque<int>::iterator it;
    it = x.begin();
    advance(it, 3);
    x.erase(it);
    for (int i = 0; i < x.size(); i++)
    {
        cout << x.at(i) << endl;
    }


    return 0;
}