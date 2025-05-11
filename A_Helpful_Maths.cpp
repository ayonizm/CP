#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string s;
    cin >> s;
    vector<int> x;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        int e = s[i] - '0';
        x.push_back(e);
    }
    sort(x.begin(), x.end());
    string f;

    for (int i = 0; i < x.size(); i++)
    {
        f += to_string(x[i]);
    }

    for (int i = 0; i < f.length()-1; i++)
    {
        // if(i!=f.length())
        // {
        //     f[i] += '+';
        // }
        cout << f[i] << "+";
    }
    cout << f[f.length()-1];

    return 0;
}