#include <iostream>
using namespace std;

int main() {
    int N;
    int count = 0;

    cout << "N = ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    cout << "So " << N << " co " << count << " uoc so." << endl;

    return 0;
}

