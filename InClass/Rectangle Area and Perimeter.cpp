#include <iostream>
using namespace std;
int main () {
    int height;
    int width;
    cin >> height >> width;
    int area = height*width;
    int para = (height+width)*2;
    cout << area << " " << para;
    return 0;
}