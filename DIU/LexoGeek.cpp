#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        bool f =next_permutation(s.begin(), s.end());
        if(f==1){
            cout <<s<<endl;
        }
        else{
            cout << "no answer" << endl;
        }
        
    }
}