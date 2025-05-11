#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int x, y;
    cin >> x >> y;
    deque<int> x1;
    deque<int> x2;
    for (int i = 0; i < x; i++)
    {
        int temp;
        cin >> temp;
        x1.push_back(temp);
    }
    
    for (int i = 0; i < y; i++)
    {
        int temp;
        cin >> temp;
        x2.push_back(temp);
    }
    int count1 = 0;
    int count2 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(auto v:x1){
        if(v%2==0){
            count1++;
        }
        else{
            count2++;

        }
    }
    for(auto v:x2){
        if(v%2==0){
            cnt1++;
        }
        else{
            cnt2++;

        }
    }
    
    int l1 = n + (count1 * 2)+(count2*4)-1;
    // cout << l1<<" ";
    int l2 = n + (cnt1 * 2) + (cnt2 * 4) - 1;
    // cout << l2 << endl;
    if(l1<l2){
        cout << "A" << endl;
    }
    else if(l1>l2){
        cout << "B" << endl;
    }
    else{
        cout << "DRAW" << endl;
    }
    return 0;
}