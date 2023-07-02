#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int number;

    while (true) {
        cout << "Hay nhap mot so duong: ";
        cin >> number;

        if (number <= 0) {
            break;
        }

        count++;
    }

    cout << "Ban da nhap " << count << " so nguyen duong!" << endl;

    return 0;
}

