#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int x = 5, y = 5, h = 100, m = 0, w = 0;
    char i;
    while (h > 0) {
        cout << "--------------------------------" << endl;
        cout << "P: " << x << "," << y << " | HP: " << h << " | $: " << m << " | Stars: " << w << endl;
        cout << "Cmd (w/a/s/d:move, t:theft, q:quit): ";
        cin >> i;
        if (i == 'q') break;
        if (i == 'w') y--;
        if (i == 's') y++;
        if (i == 'a') x--;
        if (i == 'd') x++;
        if (i == 't') {
            m += (rand() % 500) + 100;
            w++;
            cout << "Vehicle stolen!" << endl;
        }
        if (w > 0) {
            if ((rand() % 10) < w) {
                int d = (rand() % 15) + 5;
                h -= d;
                cout << "Police hit you! -" << d << " HP" << endl;
            }
        }
        if (x < 0) x = 0;
        if (y < 0) y = 0;
    }
    cout << "Wasted. Total $: " << m << endl;
    return 0;
}
