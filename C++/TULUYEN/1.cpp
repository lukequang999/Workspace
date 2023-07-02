#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main() {
    int n ;
    int sum  = 0;
    int a[10] ;
    while (true)
    {
        cout << "Nhap n = " ;
        cin >> n ;
        if (n < 0 || n < 10 )
        {
            break ;
        }
    }
    int MAXSCP = -1 ;
    for (int i = 0; i < n; i++) {
        cout << "Nhap so thu " << i + 1 << ": ";
        cin >> a[i];
        sum += a[i];

        // Kiểm tra và cập nhật số chính phương lớn nhất
        int sqrtVal = sqrt(a[i]);
        if (sqrtVal * sqrtVal == a[i] && a[i] > MAXSCP) {
            MAXSCP = a[i];
        }
    }

    cout << "Tong cac so: " << sum << endl ; ;
    cout << "So chinh phuong max: " << MAXSCP ;

    return 0;
}