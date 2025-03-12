#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> x;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
    x.push_back(50);
    list<int>::iterator erase1,erase2;
    erase1 = x.begin();
    advance(erase1, 2);
    erase2 = x.end();
    // x.erase(erase1);
    x.erase(erase1, erase2);
    x.remove(10);/*direct the value of variiables*/
    for(auto it :x){
        cout << it << " ";
    }
    cout << endl;
    x.push_back(10);
    x.push_back(20);
    x.push_back(30);
    x.push_back(40);
    x.push_back(50);
    x.reverse();
    for(auto it :x){
        cout << it << " ";
    }

    return 0;
}