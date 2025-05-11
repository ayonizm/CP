#include<bits\stdc++.h>
using namespace std;
int main(){
    list<int> x;
    x.push_back(10);
    x.push_back(21);
    x.push_back(21);
    x.push_back(21);
    x.push_back(21);
    x.push_back(30);
    x.push_back(40);
    x.push_back(50);
    x.push_back(50);
    x.push_back(50);
    x.unique();
    for(auto it :x){
        cout << it << " ";
    }
    return 0;
}