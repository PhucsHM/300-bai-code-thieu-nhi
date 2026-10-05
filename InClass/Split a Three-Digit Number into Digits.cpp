#include <iostream>
using namespace std;
int main () {
    int num;
    cin >> num;
    int first = num/100;
    int second = (num/10)%10;
    int last = num%10;
    cout << first << " " << second << " " << last;
    return 0;
}