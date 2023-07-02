#include <iostream>
using namespace std;

int main() {
    double a, b, c, x;
    
    cout << "A = ";
    cin >> a;
    
    cout << "B = ";
    cin >> b;
    
    cout << "C = ";
    cin >> c;
    
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        x = a;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        x = b;
    } else {
        x = c;
    }
    
    cout << "X = " << x << endl;
    
    return 0;
}

