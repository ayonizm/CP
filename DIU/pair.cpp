#include<bits/stdc++.h>
using namespace std;
int main(){
    /******************************string,int******************************************* */
    // pair<string, int> x;
    // x.first = "ayon chowdhury";
    // x.second = 873;
    // cout << x.first << " " << x.second << endl;
    /******************************string,vector******************************************* */
    // pair<string, vector<int>> x;
    // x.first = "aYON CHOWDHURY";
    // x.second = {1, 2, 3, 4, 5};
    // cout << x.first << endl;
    // for(auto l:x.second){
    //     cout << l;
    // }
    /******************************make pair******************************************* */
    // pair<int, int> f;
    // f = make_pair(3, 7);
    // f = {3, 7}; this is also valid
    // cout << f.first << " " << f.second << endl;
    /******************************min max******************************************* */
    // pair<int, int> p1, p2;
    // p1 = {3, 6};
    // p2 = {9, 1};
    // pair<int, int> p = min(p1, p2);
    // pair<int, int> q = max(p1, p2);
    // cout << p.first << " " << p.second << endl;
    // cout << q.first << " " << q.second << endl;
    /******************************vector pair sort******************************************* */
    // vector<pair<int, int>> x;
    // x.push_back({2, 6});
    // x.push_back({1, 9});
    // x.push_back({7, 3});
    // x.push_back({7, 9});
    // x.push_back({7, 1});
    // sort(x.begin(), x.end());
    // // sort(x.rbegin(), x.rend()); reverse
    // for(auto it1:x){
    //     cout << it1.first << " " << it1.second << endl;
    // }
    /******************************array pair sort******************************************* */
    // pair<int, int> p[] = {{3, 4}, {-1,2}, {5,-3}, {3,3},{-1,-2}};
    // sort(p, p + 5);
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j =i + 1; j < 5; j++)
    //     {
    //         if (p[i].first==p[j].first && p[i].second<p[j].second)
    //         {
    //             swap(p[i], p[j]);
    //         }
            
    //     }
        
    // }
    // for (int i = 0; i <5 ; i++)
    // {
    //     cout << p[i].first << " " << p[i].second << endl;
    // }
    /******************************vector pair sort and unique******************************************* */
    // vector<pair<string, int>> x;
    // x.push_back({"ayon", 128});
    // x.push_back({"tanha", 107});
    // x.push_back({"tanha", 107});
    // x.push_back({"abdullah", 516});
    // x.push_back({"siam", 309});
    // x.push_back({"si", 309});
    // x.push_back({"siam", 309});
    // sort(x.begin(), x.end());
    // for(auto it:x){
    //     cout << it.first << " " << it.second << endl;
    // }

    //unique
    // int n = unique(x.begin(), x.end()) - x.begin();
    // for (int i = 0; i < n; i++)
    // {
    //     cout << x[i].first << " " << x[i].second << endl;
    // }
    

    return 0;
}