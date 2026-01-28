#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
bool cmp(const pair<string,int>a,pair<string,int>b){
    return b.second < a.second;
}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        vector<pair<string, int>> ay;
        for (int i = 0; i < x; i++)
        {
            string s;
            int temp;
            cin >> s;
            cin >> temp;
            ay.push_back({s, temp});
        }
        sort(ay.begin(), ay.end(), cmp);
        for(auto v:ay){
            cout << v.first << endl;
        }
    }
    
    return 0;
}