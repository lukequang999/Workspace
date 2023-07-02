#include<iostream>
#include<string.h>
#include<cmath>
using namespace std ;
void NhapMang(int n, double *arr) {
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i + 1<< "] = " ;
        cin >> arr[i];
    }
    
}
void InMang(int n, double *arr) {
    cout << "Day so: " ;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " ;
    }
    
}
void AddLastArr(int n, double *arr) {
    int x ;
    cout << "Cho so x = " ; cin >> x ;
    arr[n] = x ;
    n++ ;
    InMang(n, arr) ;
    
}
void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}
void BubbleSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main() {
    int n ;
    double x ;
    double *arr = new double [n+1] ;
    while (true)
    {
        cout << "Nhap n = " ; cin >> n ;
        if (n > 0 || n < 100)
        {
            break;
        }
    }
    NhapMang(n,arr) ;
    AddLastArr(n,arr) ;
    BubbleSort(arr,n+1) ;
    cout << endl << "Day sap xep: ";
    for (int i = 0; i < n+1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}