#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long a, b, c;
	cin >> a >> b >> c;
	if(a==0 && b==0){
		cout << "1" << endl;
	}
    else if(a==0){
        long long int k = b / c;
        cout << k + 1;
        
	}
    else{
        long long int l1 = b / c;
        long long int l2 = ((a-1)/c);

        cout << l1-l2 << endl;
	}

    return 0;
}