#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while(n--){
        int x;
        string s;
        cin >> x;
        cin >> s;
        queue<int> a1;
        stack<int> a2;
        if(s=="FIFO"){
            for (int i = 0; i < x; i++)
            {
                string t1;
                cin >> t1;
                
                if(t1=="IN"){
                     int tm1;
                     cin >> tm1;
                     a1.push(tm1);
                }
                else{
                    if(a1.size()!=0){
                        cout << a1.front() << endl;
                        a1.pop();
                    }
                    else{
                        cout << "None" << endl;
                    }
                }
            }
            
        }
        else{
            for (int i = 0; i < x; i++)
            {
                string t1;
                cin >> t1;
                if(t1=="IN"){
                    int tm1;
                cin >> tm1;
                    a2.push(tm1);
                }
                else{
                    if(a2.size()!=0){
                        cout << a2.top() << endl;
                        a2.pop();
                    }
                    else{
                        cout << "None" << endl;
                    }
                }
            }
        }
         
    }
    return 0;
}