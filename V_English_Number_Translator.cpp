#include <bits/stdc++.h>
using namespace std;

#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    map<string, int> x;
    x["zero"] = 0;
    x["one"] = 1;
    x["two"] = 2;
    x["three"] = 3;
    x["four"] = 4;
    x["five"] = 5;
    x["six"] = 6;
    x["seven"] = 7;
    x["eight"] = 8;
    x["nine"] = 9;
    x["ten"] = 10;
    x["eleven"] = 11;
    x["twelve"] = 12;
    x["thirteen"] = 13;
    x["fourteen"] = 14;
    x["fifteen"] = 15;
    x["sixteen"] = 16;
    x["seventeen"] = 17;
    x["eighteen"] = 18;
    x["nineteen"] = 19;
    x["twenty"] = 20;
    x["thirty"] = 30;
    x["forty"] = 40;
    x["fifty"] = 50;
    x["sixty"] = 60;
    x["seventy"] = 70;
    x["eighty"] = 80;
    x["ninety"] = 90;
    x["hundred"] = 100;
    x["thousand"] = 1000;
    x["million"] = 1000000;

    string a;
    while (getline(cin, a)){
        vector<string> p;
        string temp;
        for (int i = 0; i < a.length(); i++)
        {
            if(isspace(a[i])){
                p.push_back(temp);
                temp.clear();
            }
            else{
                temp += a[i];
            }
        }
        p.push_back(temp);
        long long int sum = 0;
        long long int lo = 0;
        int isn = 0;

        for (int i = 0; i < p.size(); i++) {
            if (p[i] == "negative") {
                isn = true;
            } 
            else {
                if (p[i] == "hundred") {
                    lo *= x[p[i]];
                } else
                 if (p[i] == "thousand" || p[i] == "million") {
                    lo *= x[p[i]];
                    sum += lo;
                    lo = 0;
                } else {
                    lo += x[p[i]];
                }
            }
        }
        
        sum += lo;

        if (isn) {
            sum = -sum;
        }

        cout << sum << endl;
    }

    return 0;
}
