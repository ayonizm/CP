#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>> x;
    vector<int> v1;
    vector<int> v2;
    v1 = {1, 2, 3, 4, 5, 6, 7, 8};
    v2 = {1, 2, 6, 7, 8};
    x.push_back(v1);
    x.push_back(v2);
    for(auto it1:x){
        for(auto it2:it1){
            cout << it2 << " ";
        }
        cout << endl;
    }

    return 0;
}