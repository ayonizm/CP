#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<string> x;
    
    for (int i = 0; i < s.length(); i++)
     {
    for (int j = 2; j <= s.length() - i; j++)
         { 
            string k = s.substr(i, j);
            string l = k;
            reverse(l.begin(), l.end());
            if(l==k){
            x.push_back(k); 

            }
        }
    }
    if(x.empty()){
        cout << "No" << endl;
        return 0;
    }
    string max = x[0];
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i].length()<max.length()){
            max = x[i];
        }
    }
    int f = s.find(max)+1;
    int ei = f + max.length()-1;
    cout << "Yes" << endl;
    cout << f << " " << ei << endl;

    return 0;
}