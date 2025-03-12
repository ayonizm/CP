#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
bool kaka(deque<long long int>&a){
    long long int f=0;
    for(auto v:a){
        f = f + v;
    }
    if(f%2!=0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    op();
    long long int n;
    cin >> n;
    deque<long long int> x;
    while (n--)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    deque<long long int> tata;
    bool r = 0;
    long long int ay = kaka(x);
    while (!x.empty())
    {

        if(ay%2!=0){
            r = !r;
        }
        if(r==0){
            tata.push_back(x.front());
            ay -= x.front();
            x.pop_front();
        }
        else{
            tata.push_back(x.back());
            ay -= x.back();
            x.pop_back();

        }
    }
    long long int sum = 0;
    for(auto v:tata){
        sum += v;
    }
    cout << sum << endl;
    for(auto v:tata){
        cout << v << " ";
    }
    
    return 0;
}