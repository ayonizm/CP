// #include<bits/stdc++.h>
// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define Yes cout << "Yes\n"
// #define YES cout << "YES\n"
// #define yes cout << "yes\n"
// #define No cout << "No\n"
// #define NO cout << "NO\n"
// #define no cout << "no\n"
// #define ll long long int
// int main(){
//     op();
//     ll n;
//     cin >> n;
//     vector<int> x;
//     while (n--)
//     {
//         int p;
//         cin >> p;
//         x.push_back(p);
//     }
//     sort(x.begin(), x.end(), greater<int>());
//     vector<string> p;
//     p.push_back(to_string(x[0]));
//     p.push_back(to_string(x[1]));
//     p.push_back(to_string(x[2]));
//     string l;
//     ll m = 0;
//     l = p[0] + p[1] + p[2];
//     m = max(m, stoll(l));
//     l = p[0] + p[2] + p[1];
//     m = max(m, stoll(l));
//     l = p[1] + p[0] + p[2];
//     m = max(m, stoll(l));
//     l = p[1] + p[2] + p[0];
//     m = max(m, stoll(l));
//     l = p[2] + p[1] + p[0];
//     m = max(m, stoll(l));
//     l = p[2] + p[0] + p[1];
//     m = max(m, stoll(l));
//     cout << m << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{

    int n;
    cin >> n;
    vector<int> v;
    while (n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end(), greater<int>());

    string s0 = to_string(v[0]);
    string s1 = to_string(v[1]);
    string s2 = to_string(v[2]);

    int maxx = 0;
    string ss = s0 + s1 + s2;
    if (stoi(ss) > maxx)
    {
        maxx = stoi(ss);
    }

    string sss = s0 + s2 + s1;
    if (stoi(sss) > maxx)
    {
        maxx = stoi(sss);
    }
    string s3 = s1 + s0 + s2;
    if (stoi(s3) > maxx)
    {
        maxx = stoi(s3);
    }
    string s4 = s1 + s2 + s0;
    if (stoi(s4) > maxx)
    {
        maxx = stoi(s4);
    }
    string s5 = s2 + s1 + s0;
    if (stoi(s5) > maxx)
    {
        maxx = stoi(s5);
    }
    string s6 = s2 + s0 + s1;
    if (stoi(s6) > maxx)
    {
        maxx = stoi(s6);
    }

    cout << maxx << endl;
}