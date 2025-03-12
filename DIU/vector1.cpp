#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    // sort(x.rbegin(), x.rend());
    // // sort(x.begin(), x.end(),greater<int>());
    // for(auto it1:x){
    //     cout << it1 << " ";
    // }
    // cout << endl;
    // sort(x.begin(), x.end());
    // for(auto it2:x){
    //     cout << it2 << " ";
    // }
    // cout << endl;
    // reverse(x.begin(), x.end());
    // for(auto it3:x){
    //     cout << it3 << " ";
    // }
    // cout << x.back() << endl;
    // x.pop_back();
    // cout << x.back() << endl;
    // while (!x.empty())
    // {
    //     cout << x.back() << endl;
    //     x.pop_back();
    // }
    // sort(x.begin(), x.end());
    // int l = unique(x.begin(), x.end())-x.begin();
    // cout << l << endl;
    // for (int i = 0; i < l; i++)
    // {
    //     cout << x[i] << " ";
    // }
    // vector<int>::iterator max;
    // max = max_element(x.begin(), x.end());
    // int f = max_element(x.begin(), x.end()) - x.begin();
    // cout << x[f] << endl;/*value*/
    // cout << f << endl;/*index*/
    
    return 0;
}