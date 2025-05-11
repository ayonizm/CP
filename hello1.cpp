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
    int maxf = 0;
    for(auto ay:x){
        count[ay]++;
        maxf = max(maxf, count[ay]);
    }

    string ab;
    for(auto v2:x){
        if(count[v2]==maxf){
            ab = v2;
            break;
        }
    }
    cout << ab << " " << maxf << endl;

    return 0;
}