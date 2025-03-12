#include<bits/stdc++.h>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(12);
    dq.push_back(1234);
    dq.push_back(121);
    for (int i = 0; i < dq.size(); i++)
    {
        cout << dq.at(i) << endl;
    }
    
    cout << dq.size() << endl;
    dq.pop_front();
    dq.pop_back();
    // dq.push_front(100);
    // for (int i = 0; i < dq.size(); i++)
    // {
    //     cout << dq.at(i) << endl;
    // }
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    

    return 0;
}