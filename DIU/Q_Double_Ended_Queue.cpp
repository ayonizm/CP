#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int test = 1;
    while (n--)
    {
        deque<int> x;
        cout << "Case " << test << ":" << endl;
        int sz, num;
        cin >> sz >> num;
        for (int i = 0; i < num; i++)
        {
            string s;
            int temp;
            cin >> s;
            if(s=="pushLeft"){
                    cin >> temp;
                if(x.size()==sz){
                    cout << "The queue is full" << endl;
                }
                else{
                    x.push_front(temp);
                    cout << "Pushed in left: " << x.front() << endl;
                }
            }
            else if(s=="pushRight"){
                    cin >> temp;
                if(x.size()==sz){
                    cout << "The queue is full" << endl;
                }
                else{
                    x.push_back(temp);
                    cout << "Pushed in right: " << x.back() << endl;
                }
            }
            else if(s=="popLeft"){
                if(x.size()==0){
                    cout << "The queue is empty" << endl;
                }
                else{
                    cout << "Popped from left: " << x.front() << endl;
                    x.pop_front();
                }
            }
            else{
                if(x.size()==0){
                    cout << "The queue is empty" << endl;
                }
                else{
                    cout << "Popped from right: " << x.back() << endl;
                    x.pop_back();
                }
            }
        }
        test++;
    }
    
    return 0;
}