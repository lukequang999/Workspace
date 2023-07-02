#include<iostream>
using namespace std;

int main() {
	int N;
	cout << "Nhap tong so muon tinh tong: "; cin >> N;
	int a[N];
	int dem = 1;
	int sum = 0 ;
	for (int i = 0; i < N; i++)
	{
		cout << "Nhap so thu " << dem << ": "; cin >> a[i];
		dem++ ;
	}
	for(int i = 0 ; i < N ; i++)
	{
		sum = sum + a[i] ;
	}
	cout << "Tong cac so: " << sum ;
}

