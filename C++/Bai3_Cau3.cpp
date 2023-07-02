#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "N = ";
    cin >> N;

    cout << "Cac so chia het cho 3 trong khoang tu N den 2N" << ": ";

    for (int i = N; i <= 2 * N; i++) {
        if (i % 3 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}

