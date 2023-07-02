#include <iostream>
using namespace std;

int main() {
    int chucNang;

    while (true) {
        cout << "[1] Buoi sang" << endl;
        cout << "[2] Buoi trua" << endl;
        cout << "[3] Buoi chieu" << endl;
        cout << "[4] Buoi toi" << endl;
        cout << "[5] Ket thuc" << endl;
        cout << "Chon chuc nang: ";
        cin >> chucNang;

        switch (chucNang) {
            case 1:
                cout << "Chao buoi sang" << endl;
                break;
            case 2:
                cout << "Den gio nghi trua roi, di an thoi" << endl;
                break;
            case 3:
                cout << "Het gio lam viec, ve nha nao" << endl;
                break;
            case 4:
                cout << "Chuan bi ngu buoi toi" << endl;
                break;
            case 5:
                cout << "Chuc ngu ngon" << endl;
                return 0;
            default:
                cout << "Chuc nang khong hop le. Vui long chon lai." << endl;
                break;
        }
    }

    return 0;
}
