#include <iostream>
using namespace std;

int main() {
    double a, b, c;
    double y;
    
    cout << "Nhap a = ";
    cin >> a;
    
    cout << "Nhap b = ";
    cin >> b;
    
    cout << "Nhap c = ";
    cin >> c;
    
    if (b <= c) {
        y = a * a + 3 * a - 1;
    } else {
        y = 0;
    }
    
    cout << "Y = " << y << endl;
    
    return 0;
}

