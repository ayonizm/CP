#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
void solve(){
    

}
int main(){
    op();
    
    while (1)
    {
        string a, b;
        cin >> a >> b;
        if(a[0]=='0'&&b[0]=='0'){
            break;
        }
        int l1 = a.length() - 1;
        int l2 = b.length() - 1;
        int ct = 0;
        int one = 0;
        while (1)
        {
            if(l1<0||l2<0){
                break;
            }
            int sum = (a[l1] - '0');
            sum += (b[l2] - '0');
            sum += one;
            if(sum>=10){
                ct++;
                one = 1;
            }
            else{
                one = 0;
            }
            l1--;
            l2--;
        }
        if(l1>=0){
            for (; l1>=0; l1--)
            {
                int k = a[l1] - '0';
                k += one;
                if (k >= 10)
                {
                    ct++;
                    one = 1;
                }
                else
                {
                    one = 0;
                }
            }
            
        }
        else{
            for (; l2 >= 0; l2--)
            {
                int k = b[l2] - '0';
                k += one;
                if (k >= 10)
                {
                    ct++;
                    one = 1;
                }
                else
                {
                    one = 0;
                }
            }
        }
        if(ct==0){
            cout << "No carry operation." << endl;
        }
        else if(ct==1){

            cout << "1 carry operation." << endl;
        }
        else{
            cout << ct << " carry operations." << endl;
        }
    }
    

    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{

    char a[100], b[100];

    while (1)
    {
        scanf("%s %s", &a, &b);

        if (a[0] == '0' && b[0] == '0')
        {
            break;
        }

        int la = strlen(a) - 1;
        int lb = strlen(b) - 1;

        int c = 0;
        int ct = 0;
        while (1)
        {
            if (la == -1 || lb == -1)
            {
                break;
            }

            int sum = (a[la--] - '0') + (b[lb--] - '0') + c;

            if (sum >= 10)
            {
                c = 1;
                ct++;
            }

            else
            {
                c = 0;
            }
        }

        int sum2 = 0;
        if (la > -1)
        {
            for (int i = la; i >= 0; i--)
            {
                sum2 = (a[i] - '0') + c;
            }

            if (sum2 >= 10)
            {
                c = 1;
                ct++;
            }

            else
            {
                c = 0;
            }
        }

        else if (lb > -1)
        {
            for (int i = lb; i >= 0; i--)
            {
                sum2 = (b[i] - '0') + c;
            }

            if (sum2 >= 10)
            {
                c = 1;
                ct++;
            }

            else
            {
                c = 0;
            }
        }

        if (ct == 0)
        {
            printf("No carry operation.\n");
        }
        else if (ct == 1)
        {

            printf("1 carry operation.\n");
        }

        else
        {
            printf("%d carry operations.\n", ct);
        }
    }

    return 0;
}