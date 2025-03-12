#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string> x;
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;
        x.push_back(temp);
    }
    map<string, int> count;
    for(auto v:x){
        count[v]++;
    }
    int ovai = 0;
    for(auto chod:count){
        if(chod.second==2){
            ovai++;
        }
    }
    cout << ovai << endl;
    return 0;
}