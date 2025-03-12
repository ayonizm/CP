#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    char x[100];
    int sum = 0;
    scanf("%s", &x);
    int l = strlen(x);
    for (int i = 0; i < l; i++)
    {
        if(x[i]=='-'){
            continue;
        }
        int temp = x[i] - '0';
        sum = sum + temp;
    }
    printf("%d", sum);

    return 0;
}