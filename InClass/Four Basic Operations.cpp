#include <iostream>
using namespace std;
int main () {
    int a, b;
    cin >> a >> b;
    int sum = a+b;
    int diff = a-b;
    int product = a*b;
    int div = a/b;
    int remain = a%b;
    cout << sum << " " << diff << " " << product << " " << div << " " << remain;
    return 0;
}