#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    double y;
    
    cout << "Nhap x = ";
    cin >> x;
    
    if (x == 1) {
        cout << "Bieu thuc khong xac dinh" << endl;
    } else {
        y = (exp(x) + 1) / (x - 1);
        cout << "Y = " << y << endl;
    }
    
    return 0;
}

