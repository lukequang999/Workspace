#include<iostream>
#include<string.h>
using namespace std ;
struct sinhVien {
	string MaSV ;
	int Diem ;
	string Ten ;
} ;
void NhapSV(sinhVien sv[] , int n) {
	for(int i=0 ; i < n ; i++) {
		cin.ignore() ;
		cout << "Nhap Ma SV: " ; getline(cin,sv[i].MaSV) ;
		cout << "Nhap Ten SV: " ; getline(cin,sv[i].Ten) ;
		cout << "Nhap Diem: " ; cin >> sv[i].Diem ;
	}
}
void XuatSV(sinhVien sv[] , int n) {
	cout << "Hien thi danh sach: " << endl ;
	cout << "MaSV \t Ho Ten \t Diem" << endl ;
	for (int i = 0; i < n ; i++) {
		cout << sv[i].MaSV << "\t" << sv[i].Ten << "\t" << sv[i].Diem << endl ;
	}
}
int main() {
	int n ;
	cout << "Nhap so sinh vien, n = " ; cin >> n ;
	sinhVien sv[n] ;
	NhapSV(sv, n) ;
	XuatSV(sv,n) ;
}
