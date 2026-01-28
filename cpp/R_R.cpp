// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define endl "\n"
// #define Yes cout << "Yes\n"
// #define YES cout << "YES\n"
// #define yes cout << "yes\n"
// #define No cout << "No\n"
// #define NO cout << "NO\n"
// #define no cout << "no\n"
// #define ll long long int
// void hello(string s, int idx, vector<string> &ay)
// {
//     if (idx == s.length() - 1)
//     {
//         ay.push_back(s);
//         return;
//     }
//     for (int i = idx; i < s.length(); i++)
//     {
        
//         if ( i!=idx && s[i] == s[idx]){

//             continue;
//         }

//         swap(s[idx], s[i]);  
//         hello(s, idx + 1, ay);
//     }
// }

// int main()
// {
//     string s;
//     cin >> s;
//     sort(s.begin(), s.end());

//     vector<string> ay;
//     hello(s, 0, ay);

//     cout << ay.size() << endl;

//     for (auto &v : ay)
//     {
//         cout << v << endl;
//     }

//     return 0;
// }
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
    ll n;
    cin >> n;
    vector<pair<int,int>> x;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        x.push_back({a,b});
    }
    sort(x.begin(), x.end());
    for(auto v:x){
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}