#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "X = ";
    cin >> x;

    if (x >= 0 && x < 10) {
        switch (x) {
            case 0:
                cout << x << " doc la khong." ;
                break;
            case 1:
                cout << x << " doc la mot." ;
                break;
            case 2:
                cout << x << " doc la hai." ;
                break;
            case 3:
                cout << x << " doc la ba." ;
                break;
            case 4:
                cout << x << " doc la bon." ;
                break;
            case 5:
                cout << x << " doc la nam." ;
                break;
            case 6:
                cout << x << " doc la sau." ;
                break;
            case 7:
                cout << x << " doc la bay." ;
                break;
            case 8:
                cout << x << " doc la tam." ;
                break;
            case 9:
                cout << x << " doc la chin." ;
                break;
        }
    } else {
        cout << x << " nam ngoai pham vi.";
    }

    return 0;
}

