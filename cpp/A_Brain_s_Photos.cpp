#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    cin >> x >> y;
    vector<char> ay;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            char l;
            cin >> l;
            ay.push_back(l);
        }
        
    }
    int flag = 1;
    for(auto v:ay){
        if(v!='B'&&v!='W'&&v!='G'){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "#Black&White" << endl;
    }
    else{

        cout << "#Color" << endl;
    }
    return 0;
}