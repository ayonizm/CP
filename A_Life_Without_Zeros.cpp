#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int a, b;
    a = stoi(s1);
    b = stoi(s2);
    long long int c = a + b;
    string l = to_string(c);
    for (int i = 0; i < l.length(); i++)
    {
        if(l[i]=='0'){
            l.erase(l.begin() + i);
            i--;
        }
    }
    c = stoi(l);
    for (int i = 0; i < s1.length(); i++)
    {
        if(s1[i]=='0'){
            s1.erase(s1.begin() + i);
            i--;
        }
    }
    int a1 = stoi(s1);
    for (int i = 0; i < s2.length(); i++)
    {
        if(s2[i]=='0'){
            s2.erase(s2.begin() + i);
            i--;
        }
    }
    int b1 = stoi(s2);
    
    long long int d = a1 + b1;
    
    if(c==d){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

        return 0;
}