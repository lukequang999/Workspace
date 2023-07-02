#include <iostream>
using namespace std;

int main() {
    int tuoi;
    int soLuong;
    double donGia;
    
    cout << "Nhap tuoi: ";
    cin >> tuoi;
    
    cout << "Don gia: ";
    cin >> donGia;
    
    cout << "So luong: ";
    cin >> soLuong;
    
    double thanhTien = soLuong * donGia;
    
    if (tuoi <= 10) {
        thanhTien *= 0.7;
    } else if (tuoi <= 18) {
        thanhTien *= 0.8;
    }
    
    cout << "So tien phai tra:" << thanhTien << endl;
    
    return 0;
}

