#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    char x;
    scanf("%c", &x);
    if(x>='a'&&x<='z'||x>='A'&&x<='Z'){
        printf("alpha");
    }
    else if(x>='0'&&x<='9'){
        printf("digit");
    }
    else{
        printf("special");
    }
    return 0;
}