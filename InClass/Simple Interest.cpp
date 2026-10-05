#include <iostream>
#include <iomanip>
using namespace std;
int main () {
    double  P, r, t;
    cin >> P >> r >> t;
    double interest =  P*r*t / 100.0;
    double total = P+interest;
    cout << fixed << setprecision(2) << interest << " " << total;
    return 0;
}