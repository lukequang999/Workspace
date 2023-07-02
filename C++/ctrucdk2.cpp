#include<iostream>
#include<cmath>
using namespace std ;
int main() {
    int n ;
    int sum = 1 ;
    cout << "N = " ; cin >> n ;
    if (n > 2 && n < 20)
    {
        for (int i = 1; i <= n; i++)
        {
            sum+=( (i-1) * i * (i+1) ) ;
        }
        cout << "Tong A = " << sum ;
        
    } else{
        cout << "n khong thoa man!" ;
    }
    
}