#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> name={1,1,1,1,1,1,1,1,2,2,2,2,2,2,3,109,89,4,5,6,7,76,8,9,9};
    list<int> name1={1,1,1,1,1,1,1,1,2,2,2,2,2,2,3,109,89,4,5,6,7,76,8,9,9};
    // list<int>::iterator x,x1;
    // x = name.begin();
    // x1 = name.begin();
    // advance(x1, 4);
    // name.erase(x, x1);
    // name.remove(9);
    // name.reverse();
    // name.sort();
    // name.unique();
    name.merge(name1);
    name.sort();
    for (auto it : name)
    {
        cout << it << endl;
    }
    return 0;
}