#include <iostream>
#include<string.h>
using namespace std;

// 1
struct SinhVien {
    string MaSV;
    string TenL;
    string Lop;
    string Que;
    int Tuoi;
};

// 2
void nhapSV(SinhVien& sv) {
    cout << "Nhap ma sinh vien: ";
    cin.ignore();
    getline(cin, sv.MaSV);

    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.TenL);

    cout << "Nhap lop: ";
    getline(cin, sv.Lop);

    cout << "Nhap que quan: ";
    getline(cin, sv.Que);

    cout << "Nhap tuoi: ";
    cin >> sv.Tuoi;
}

// 3
void xuatSV(const SinhVien& sv) {
    cout << "Ma sinh vien: " << sv.MaSV << ", Ten sinh vien: " << sv.TenL << ", Lop: " << sv.Lop
         << ", Que quan: " << sv.Que << ", Tuoi: " << sv.Tuoi << endl;
}

// 4
void xoaSV(SinhVien* dsSV, int& n, int k) {
    if (k < 0 || k >= n) {
        cout << "k khong hop le!" << endl;
        return;
    }

    
    for (int i = k; i < n - 1; i++) {
        dsSV[i] = dsSV[i + 1];
    }

    n--;
}

int main() {
    int n;
    cout << "Nhap so luong sinh vien: ";
    cin >> n;
    SinhVien* dsSV = new SinhVien[n];
    cout << "Nhap thong tin cua " << n << " sinh vien ban vua nhap vao:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << ":" << endl;
        nhapSV(dsSV[i]);
    }
    cout << "Danh sach " << n << " sinh vien:" << endl;
    for (int i = 0; i < n; i++) {
        xuatSV(dsSV[i]);
    }
    int k;
    cout << "Nhap vi tri can xoa (tinh tu 0): ";
    cin >> k;
    xoaSV(dsSV, n, k);
    cout << "Danh sach sinh vien sau khi xoa:" << endl;
    for (int i = 0; i < n; i++) {
        xuatSV(dsSV[i]);
    }
    delete[] dsSV;
    return 0;
}
