#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    map<char, int> x;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        x[s[i]]++;
    }
    int k;
    cin >> k;
    while (k--)
    {
        string c;
        cin >> c;
        vector<int> v;
        for (int i = 0; i < c.length(); i++)
        {
            v.push_back(x[c[i]]);
            x[c[i]]--;
        }
        int u = *min_element(v.begin(), v.end());
        cout << u << endl;
    }
    

    return 0;
}