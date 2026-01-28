#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    map<char, int> x;
    map<char, int> y;

    for (int i = 0; i < 2; i++)
    {
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            x[s[i]]++;
        }
        
    }

    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
    {
        y[a[i]]++;
    }
    int flag = 1;
    for(auto v:y){
        if(v.second !=x[v.first]||x.size()!=y.size()){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }

    return 0;
}