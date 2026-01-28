#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string x;
    while (cin>>x)
    {
        int l = x.length();
        int m = 0;
        int f = 0;
        int s = 0;
        int r = 0;
        int k = 0;
        int e = 0;
        int q = 0;
        int z = 0;
        m = (x[l - 1] - '0') + (10 * (x[l - 2] - '0'));
        if (m % 4 == 0)
        {
            if (x[l - 1] == '0' && x[l - 2] == '0')
            {
                f = 1;
            }
            if (f == 1)
            {
                printf("This is leap year.\n");
                for (int i = 0; i < l; i++)
                {
                    s += x[i] - '0';
                }
                if (s % 3 == 0)
                {
                    if (x[l - 1] == '0' || x[l - 1] == '5')
                    {
                        r = 1;
                    }
                }
                if (r == 1)
                {
                    printf("This is huluculu festival year.\n");
                }
                for (int i = 0; i < l; i++)
                {
                    if (i % 2 != 0)
                    {
                        k += x[i] - '0';
                    }
                    else
                    {
                        e += x[i] - '0';
                    }
                }

                if ((abs(e - k)) % 11 == 0)
                {
                    if (x[l - 1] == '0' || x[l - 1] == '5')
                    {
                        q = 1;
                    }
                }
                if (q == 1)
                {
                    printf("This is bulukulu festival year.\n");
                }
                printf("\n");
            }
            else if (f == 0)
            {

                int z = (x[l - 1] - '0') + 10 * (x[l - 2] - '0');
                if (z % 4 == 0)
                {
                    if (x[l - 1] == '0' && x[l - 2] != '0')
                    {
                        f = 1;
                    }
                }
                if (f == 1)
                {
                    printf("This is leap year.\n");
                    for (int i = 0; i < l; i++)
                    {
                        s += x[i] - '0';
                    }
                    if (s % 3 == 0)
                    {
                        if (x[l - 1] == '0' || x[l - 1] == '5')
                        {
                            r = 1;
                        }
                    }
                    if (r == 1)
                    {
                        printf("This is huluculu festival year.\n");
                    }
                    for (int i = 0; i < l; i++)
                    {
                        if (i % 2 != 0)
                        {
                            k += x[i] - '0';
                        }
                        else
                        {
                            e += x[i] - '0';
                        }
                    }

                    if ((abs(e - k)) % 11 == 0)
                    {
                        if (x[l - 1] == '0' || x[l - 1] == '5')
                        {
                            q = 1;
                        }
                    }
                    if (q == 1)
                    {
                        printf("This is bulukulu festival year.\n");
                    }
                }
                printf("\n");
            }
        }
        else if (f == 0)
        {
            for (int i = 0; i < l; i++)
            {
                s += x[i] - '0';
            }
            if (s % 3 == 0)
            {
                if (x[l - 1] == '0' || x[l - 1] == '5')
                {
                    r = 1;
                }
            }
            if (r == 1)
            {
                printf("This is huluculu festival year.\n\n");
            }
            else if (f == 0)
            {
                printf("This is an ordinary year.\n\n");
            }
        }
    }
    return 0;
}