#include <iostream>
using namespace std;

int main() {
    int n;
    double S3 = 0.0;
    
    cout << "Nhap n = ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        S3 += 1.0 / (i * (i + 1));
    }
    
    cout << "Tong S3 = " << S3 << endl;
    
    return 0;
}

