#include<iostream>
#include<cmath>
using namespace std ;
bool CheckSCP(int n){
        int bp = sqrt(n) ;
        return bp * bp == n ;
    
}
int main() {
    int n ;
    cout << "Nhap N = " ; cin >> n ;
    if (n <= 0)
    {
        cout << "n khong duong!" ;
    } else {
        cout << "So chinh phuong:" ;
        for (int i = 0; i < n; i++)
        {
            if (CheckSCP(i) == true)
            {
                cout << " " << i ;
            }
            
        }
        
    }
    
}