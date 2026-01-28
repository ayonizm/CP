#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
    list<int>::iterator ayon;
    ayon = x.begin();
    advance(ayon, 2);
    x.insert(ayon,4, 100);
    for(auto it:x){
        cout << it << endl;
    }
    return 0;
}