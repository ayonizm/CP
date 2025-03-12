#include<bits/stdc++.h>
using namespace std;
int main(){
    /********************************set of integer********************************************** */
    set<int>x= {7,1,1,1,1,1,2,2,2,2,3,3,6,6};
    cout << x.size() << endl;
    for(auto v:x){
        cout << v <<" ";
    }
    
    /********************************set clear********************************************** */
    //set<int>x= {1,1,1,1,1,2,2,2,2,3,3,6,6};
    // x.clear();
    // cout << x.empty() << endl;
    /********************************set insert********************************************** */
    // set<int> x;
    // x.insert(2);
    // x.insert(2);
    // x.insert(3);
    // x.insert(3);
    // x.insert(5);
    // x.insert(9);
    // x.insert(7);
    // for(auto v:x){
    //     cout << v << endl;
    // }
    // cout << x.size() << endl;
    /********************************set count********************************************** */
    // set<int> x;
    // x.insert(2);
    // x.insert(2);
    // x.insert(3);
    // x.insert(3);
    // x.insert(5);
    // x.insert(9);
    // x.insert(7);
    // cout << x.count(2);
    /********************************set begin() pointer********************************************** */
    // set<int> x;
    // x.insert(2);
    // x.insert(2);
    // x.insert(3);
    // x.insert(3);
    // x.insert(5);
    // x.insert(9);
    // x.insert(7);
    // cout << *x.begin() << endl;
    // cout << *x.end() << endl;
    /********************************set itarate pointer********************************************** */
    // set<int> x;
    // x.insert(1);
    // x.insert(2);
    // x.insert(3);
    // cout << *(x.begin()) << endl;/*first element*/
    
    // cout << *(x.end()--) << endl;/*last element*/
    // cout << *(x.rbegin()) << endl;/*last element*/
    /********************************set erase********************************************** */
    // set<int> x;
    // x.insert(1);
    // x.insert(2);
    // x.insert(3);
    // x.erase(2);/*delete by value*/
    // x.erase(x.begin());/*delete first element*/
    // x.erase(--x.end());/*delete last element*/
    // for(auto v:x){
    //     cout << v << " ";
    // }

    /********************************set string********************************************** */
    // set<string> s;
    // s.insert("mahnoor");
    // s.insert("nida");
    // s.insert("ayon");
    // s.insert("sami");
    // s.insert("taj");
    // s.insert("sami");
    // s.insert("taj");
    // s.insert("mahnoor");
    // s.insert("mahnoor");
    // for(auto v:s){
    //     cout << v << " ";
    // }
    /********************************set pair********************************************** */
    // set<pair<int, int>> x1;
    // x1.insert({1, 3});
    // x1.insert({2, 4});
    // x1.insert({8, 3});
    // x1.insert({2, 3});
    // x1.insert({1, 3});
    // x1.insert({1, 3});
    // x1.insert({2, 3});
    // x1.insert({7, 3});
    // x1.insert({7, 6});
    // x1.insert({7, 3});
    // for(auto u:x1){
    //     cout << u.first << " " << u.second << endl;
    // }
    /********************************set greater********************************************** */
    // set<int,greater<int>> x1;
    // x1.insert(3);
    // x1.insert(4);
    // x1.insert(3);
    // x1.insert(3);
    // x1.insert(3);
    // x1.insert(3);
    // x1.insert(3);
    // x1.insert(3);
    // x1.insert(6);
    // x1.insert(3);
    //  for(auto u:x1){
    //      cout << u << " ";
    // }
    /********************************set find********************************************** */
    // set<int>::iterator it;
    //         it = x.find(temp);
    //         if(it!=x.end()){
    //             cout << "Yes" << endl;
    //         }
    //         else{

    //             cout << "No" << endl;
    //         }
}