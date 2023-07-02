#include <iostream>
using namespace std;

int main() {
    int nam;

    cout << "N = ";
    cin >> nam;

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        cout << nam << " la nam nhuan" << endl;
    } else {
        cout << nam << " khong phai nam nhuan" << endl;
    }

    return 0;
}

