#include <iostream>
using namespace std;

int main() {
    int M, N;

    cout << "M = ";
    cin >> M;

    cout << "N = ";
    cin >> N;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

