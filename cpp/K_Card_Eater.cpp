#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
bool ok(vector<int>x){
    map<int, int> l;
    for (int i = 0; i < x.size(); i++)
    {
        l[x[i]]++;
    }
    for(auto v:l){
        if(v.second>1){
            return 0;
        }
    }
    return 1;
}
int main(){
    op();
    int n;
    cin >> n;
    int temp;
    vector<int> x;
    while (n--)
    {
        cin >> temp;
        x.push_back(temp);
    }
    // sort(x.begin(), x.end());
    int count = 0;
    for (int i = 0; i <= x.size()-3; i++)
    {
        if(ok(x)){
            break;
        }
        count++;
        int m = *max_element(x.begin() + i, x.begin() + 3 + i);
        int k = *min_element(x.begin() + i, x.begin() + 3 + i);
        int a = find(x.begin() + i, x.begin() + 3 + i,m)-x.begin();
        int b = find(x.begin() + i, x.begin() + 3 + i,n)-x.begin();
        x.erase(x.begin() + a);
        x.erase(x.begin() + b);
        i--;
       }
    cout << count;
    return 0;
}