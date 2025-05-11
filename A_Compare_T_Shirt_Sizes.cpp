#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        string s1;
        string s2;
        cin >> s1;
        cin >> s2;
        char a, b;
        a = s1.back();
        b = s2.back();
        if(a==b){
            if(s1.length()==s2.length()){
                cout << "=" << endl;
            }
            else if(a=='S'){
                if(s1.length()>s2.length()){

                     cout << "<" << endl; 
                }
                else{
                     cout << ">" << endl; 

                }
            }
            else{
                if(s1.length()>s2.length()){

                     cout << ">" << endl; 
                }
                else{
                     cout << "<" << endl; 

                }
            }
        }
        else{
            if(a>b){
                cout << "<" << endl;
            }
            else{
                cout << ">" << endl;

            }
        }
    }
    
    return 0;
}