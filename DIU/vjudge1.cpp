#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    char a;
    vector<char>s;
    while(cin>>a)
    {
        s.push_back(a);
    }
    sort(s.begin(), s.end());
    // for(auto v:s){
    //     cout << v << " ";
    // }
    cout << "remaining : ";
    int count = 0;
    vector<char> t;
    for (int i = 'A'; i <= 'Z';i++){
        auto it = find(s.begin(), s.end(), i);
        if(it==s.end()){
            cout << (char)i << " ";
            count++;
        }
        else{
            t.push_back(char(i));
        }
    }
    
    cout << endl;
    cout  <<count<<" out of 26";
    return 0;
}