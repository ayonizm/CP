#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;

    getline(cin, s);

    map<string, int> count;
    vector<string> x;
        string temp;
    for(auto v:s){
        if(isspace(v)){
            x.push_back(temp);
            temp.clear();
        }
        else{
            temp = temp + v;
        }
    }
    x.push_back(temp);
  
    for(auto ay:x){
        count[ay]++;
    }
    for(auto x1:count){
        cout << x1.first << " " << x1.second << endl;
    }

    return 0;
}