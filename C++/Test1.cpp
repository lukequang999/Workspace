#include <iostream>

using namespace std;

// Tham trị (pass-by-value)
void modifyValue(int x) {
    x = x + 1;
    cout << "Inside function (tham trị): " << x << endl;
}

// Tham biến (pass-by-reference)
void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] + 1;
    }
}

int main() {
    int num = 10;
    cout << "Before modification (tham trị): " << num << endl;
    modifyValue(num);
    cout << "After modification (tham trị): " << num << endl;

    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);

    cout << "Before modification (tham biến): ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    modifyArray(myArray, size);

    cout << "After modification (tham biến): ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
