#include<bits/stdc++.h>

using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main() {
  op();
  vector < string > la;
  while (1) {
    string s;
    vector < string > k;

    char t;
    cin >> t;
    if (t == '0') {
      break;
    }
    getline(cin, s);
    s = t + s;
    string temp;
    for(auto v:s){
        if(isspace(v)){
            k.push_back(temp);
            la.push_back(temp);
            temp.clear();
        }
        else{
            temp += v;
        }
    }
    k.push_back(temp);
    la.push_back(temp);
    for (int i = 0; i < k.size()-1; i++)
    {
        cout << k[i].length() << "-";
    }
    cout << k[k.size() - 1].length() << endl;
  }
  cout << endl;
  cout << "The biggest word: ";
  string ms="1";
  for (int i = 0; i < la.size(); i++)
  {
    if(la[i].length()>=ms.length()){
        ms = la[i];
    }
  }
  cout << ms << endl;
  return 0;
}