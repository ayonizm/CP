#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    int l1 = s.find("AB");
    int t1 = s.rfind("BA");
    int l2 = s.rfind("AB");
    int t2 = s.find("BA");
    if(l1==-1||t1==-1||l2==-1||t2==-1){
        cout << "NO" << endl;
    }
    else if(abs(l1-t1)==1&&abs(l2-t2)==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}