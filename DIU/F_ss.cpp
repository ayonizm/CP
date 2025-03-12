#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
   

    while (s.length() % 2 == 0) {  // Continue while length is even
        int l = s.length();
        string temp1 = s.substr(0, l / 2);  // First half
        string temp2 = s.substr(l / 2, l);  // Second half

        if (temp1 == temp2) {
            cout << l << endl;  // Print the length of the string
            return 0;  // Exit after printing the result
        }

        // Remove the last character to check the next smaller even length
        s.pop_back(); 
    }

    cout << 0 << endl;  // If no valid length found, print 0
    return 0;
}
