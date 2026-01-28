#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    int a=0;
    int d=0;
    for (int i = 0; i < n; i++)
    {
        char p;
        cin >> p;
        if(p=='A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a==d){
        cout << "Friendship" << endl;
    }
    else if(a>d){
        cout << "Anton" << endl;
    
    }
    else{

        cout << "Danik" << endl;
    }
    
    return 0;
}