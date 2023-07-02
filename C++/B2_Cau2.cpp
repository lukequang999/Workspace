#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    double result;
    
    cout << "Nhap x = ";
    cin >> x;
    
    if (x == 3 || x == 0 || x == -1 || x < 0) {
        cout << "Bieu thuc khong xac dinh" << endl;
    } else {
        result = 1 + sqrt(x) / (x - 3);
        cout << "Ket qua: " << result << endl;
    }
    
    return 0;
}

