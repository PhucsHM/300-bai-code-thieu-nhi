#include <iostream>
using namespace std;
int main () {
    double a, b, c;
    cin >> a >> b >> c;
    double max = a;
    double min = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    cout << "max: " << max << " " << "min: " << min;
    return 0;
}