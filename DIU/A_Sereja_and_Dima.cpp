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
    int s=0, t=0,flag = 1;
    while (!x.empty())
    {
        if(flag==1){
            if(*x.begin()>x.back()){
                s += *x.begin();
                x.erase(x.begin());
            }
            else{
                s += x.back();
                x.pop_back();
            }
            flag = 2;
        }
        else if(flag==2){
            if(*x.begin()>x.back()){
                t += *x.begin();
                x.erase(x.begin());
            }
            else{
                t += x.back();
                x.pop_back();
            }
            flag = 1;
        }
    }
    cout << s << " " << t << endl;

    return 0;
}