#include<iostream>
using namespace std ;

int main() {
    int M, N ;
    cout << "M = " ; cin >> M ;
    cout << "N = " ; cin >> N ;
    if (0 < M || M < N)
    {
        cout << "Tang dan: " ;
        for (int i = M; i < N; i++)
        {
            cout << i << " ";
        }
        cout << endl ;
        cout << "Giam dan: " ;
        for (int i = N; i > M; i--)
        {
            cout << i << " ";
        }
        cout << endl ;
        
    }
    
}