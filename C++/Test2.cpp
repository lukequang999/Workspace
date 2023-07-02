#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Nhap so N: ";
    cin >> N;

    int m = 1;
    int sum = 0;

    while (sum + m < N) {
        sum += m;
        m++;
    }

    m--; // Giảm một đơn vị để lấy giá trị lớn nhất mà tổng vẫn nhỏ hơn N

    cout << "So nguyen duong m lon nhat la: " << m << endl;

    return 0;
}
