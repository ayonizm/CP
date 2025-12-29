#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;

    double term1 = (2 * x * y) / sqrt(x * x + y * y);
    double term2 = pow((x + y - 1), 2) / (x * y);
    double result = term1 - term2;
    cout << fixed << setprecision(3) <<result << endl;

    return 0;
}
