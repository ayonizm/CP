// #include<bits/stdc++.h>

// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// int main() {
//   op();
//   int n;
//   cin >> n;
//   while (n--) {
//     vector < int > x;
//     vector < int > y;
//     vector < vector<int>> po;
//     int a, b;
//     cin >> a >> b;
//     for (int i = 0; i < a; i++) {
//       int temp;
//       cin >> temp;
//       x.push_back(temp);
//     }
//     for (int i = 0; i <= a; i++)
//     {
//         for (int j = i; j < a; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//               y.push_back(x[k]);
//             }
//             if(y.size()==b){
//               int r = *max_element(y.begin(), y.end());
//               cout << r << " ";
//             }
//             y.clear();
//         }
//     }
//         cout << endl;
// }
//   return 0;
// }
#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
int main() {
    op();
    int n;
    cin >> n;
    while (n--) {
        int a, b;
        cin >> a >> b;
        vector<int> x(a);
        for (int i = 0; i < a; i++) {
            cin >> x[i];
        }
        
        deque<int> po;
        for (int i = 0; i <= a - b; i++) {
            int r = *max_element(x.begin() + i, x.begin() + i + b);
            po.push_back(r); 
        }
       
        for (auto v : po) {
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}
