#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Nhap so: ";
    cin >> number;

    if (number >= 1 && number <= 12) {
        int days;
        if (number == 2) {
        	cout << "Thang " << number << " co 28 hoac 29 ngay." ;
        } else if (number == 4 || number == 6 || number == 9 || number == 11) {
            days = 30;
            cout << "Thang " << number << " co " << days << " ngay.";
        } else {
            days = 31;
            cout << "Thang " << number << " co " << days << " ngay.";
        }
    } else {
        cout << "So nhap vao khong phai la thang cua nam." << endl;
    }

    return 0;
}
