#include <iostream>
using namespace std;

// 1
void nhapMang(float* arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << "A[" << i + 1 << "] = " ;
        cin >> arr[i];
    }
}

// 2
void inSoNguyenChiaHetCho2(float* arr, int n) {
    cout << "Cac so thuc co phan nguyen chia het cho 2 la: ";
    for (int i = 0; i < n; i++) {
        int phanNguyen = static_cast<int>(arr[i]);
        if (phanNguyen % 2 == 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}
// 3
int main() {
    int n;
    cout << "N = ";
    cin >> n;
    float* arr = new float[n];
    nhapMang(arr, n);
    inSoNguyenChiaHetCho2(arr, n);
    delete[] arr;
    return 0;
}
