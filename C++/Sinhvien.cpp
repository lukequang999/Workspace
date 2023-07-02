#include <iostream>
#include <string>

using namespace std;

const int MAX_SINHVIEN = 100; // Giả sử tối đa 100 sinh viên trong danh sách

// Định nghĩa cấu trúc Sinhvien
struct Sinhvien
{
    int MaSV;
    string Hoten;
    string Lop;
    double Diem;
};

// a. Nhập một danh sách sinh viên
void nhapDanhSachSinhVien(Sinhvien danhSachSV[], int& soLuongSV)
{
    cout << "Nhap so luong sinh vien: ";
    cin >> soLuongSV;

    for (int i = 0; i < soLuongSV; ++i)
    {
        cout << "Nhap MaSV: ";
        cin >> danhSachSV[i].MaSV;
        cout << "Nhap Ho ten: ";
        cin.ignore(); // Để loại bỏ ký tự newline (dấu Enter) còn sót lại sau khi nhập số lượng sinh viên
        getline(cin, danhSachSV[i].Hoten);
        cout << "Nhap Lop: ";
        getline(cin, danhSachSV[i].Lop);
        cout << "Nhap Diem: ";
        cin >> danhSachSV[i].Diem;
    }
}

// b. Hiển thị danh sách sinh viên ra màn hình
void hienThiDanhSachSinhVien(const Sinhvien danhSachSV[], int soLuongSV)
{
    cout << "Danh sach sinh vien:" << endl;
    for (int i = 0; i < soLuongSV; ++i)
    {
        cout << "MaSV: " << danhSachSV[i].MaSV << ", Ho ten: " << danhSachSV[i].Hoten << ", Lop: " << danhSachSV[i].Lop << ", Diem: " << danhSachSV[i].Diem << endl;
    }
}

// c. Hiển thị danh sách sinh viên thuộc lớp đó ra màn hình
void hienThiSinhVienTheoLop(const Sinhvien danhSachSV[], int soLuongSV, const string& lop)
{
    cout << "Danh sach sinh vien thuoc lop " << lop << ":" << endl;
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Lop == lop)
        {
            cout << "MaSV: " << danhSachSV[i].MaSV << ", Ho ten: " << danhSachSV[i].Hoten << ", Lop: " << danhSachSV[i].Lop << ", Diem: " << danhSachSV[i].Diem << endl;
        }
    }
}

// d. Hiển thị danh sách sinh viên thuộc lớp đó mà có điểm lớn hơn 5 ra màn hình
void hienThiSinhVienTheoLopVaDiem(const Sinhvien danhSachSV[], int soLuongSV, const string& lop, double diem)
{
    cout << "Danh sach sinh vien thuoc lop " << lop << " co diem lon hon " << diem << ":" << endl;
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Lop == lop && danhSachSV[i].Diem > diem)
        {
            cout << "MaSV: " << danhSachSV[i].MaSV << ", Ho ten: " << danhSachSV[i].Hoten << ", Lop: " << danhSachSV[i].Lop << ", Diem: " << danhSachSV[i].Diem << endl;
        }
    }
}

// e. Hiển thị danh sách sinh viên có điểm lớn nhất
void hienThiSinhVienDiemMax(const Sinhvien danhSachSV[], int soLuongSV)
{
    double maxDiem = danhSachSV[0].Diem;

    for (int i = 1; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Diem > maxDiem)
        {
            maxDiem = danhSachSV[i].Diem;
        }
    }

    cout << "Danh sach sinh vien co diem lon nhat:" << endl;
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Diem == maxDiem)
        {
            cout << "MaSV: " << danhSachSV[i].MaSV << ", Ho ten: " << danhSachSV[i].Hoten << ", Lop: " << danhSachSV[i].Lop << ", Diem: " << danhSachSV[i].Diem << endl;
        }
    }
}

// f. Thêm một sinh viên mới vào cuối danh sách
void themSinhVienCuoiDanhSach(Sinhvien danhSachSV[], int& soLuongSV, const Sinhvien& sv)
{
    if (soLuongSV < MAX_SINHVIEN)
    {
        danhSachSV[soLuongSV] = sv;
        soLuongSV++;
    }
    else
    {
        cout << "Danh sach sinh vien da day, khong the them sinh vien moi!" << endl;
    }
}

// g. Thêm một sinh viên mới vào sau sinh viên thứ k
void themSinhVienSauViTriK(Sinhvien danhSachSV[], int& soLuongSV, const Sinhvien& sv, int k)
{
    if (soLuongSV < MAX_SINHVIEN && k >= 0 && k < soLuongSV)
    {
        for (int i = soLuongSV; i > k + 1; --i)
        {
            danhSachSV[i] = danhSachSV[i - 1];
        }
        danhSachSV[k + 1] = sv;
        soLuongSV++;
    }
    else
    {
        cout << "Khong the them sinh vien moi vao vi tri " << k << "!" << endl;
    }
}

// h. Xóa sinh viên ở vị trí k
void xoaSinhVienTaiViTriK(Sinhvien danhSachSV[], int& soLuongSV, int k)
{
    if (soLuongSV > 0 && k >= 0 && k < soLuongSV)
    {
        for (int i = k; i < soLuongSV - 1; ++i)
        {
            danhSachSV[i] = danhSachSV[i + 1];
        }
        soLuongSV--;
    }
    else
    {
        cout << "Khong the xoa sinh vien tai vi tri " << k << "!" << endl;
    }
}

// k. Sắp xếp danh sách sinh viên theo chiều giảm dần của điểm
void sapXepDanhSachSinhVienGiamDan(Sinhvien danhSachSV[], int soLuongSV)
{
    for (int i = 0; i < soLuongSV - 1; ++i)
    {
        for (int j = i + 1; j < soLuongSV; ++j)
        {
            if (danhSachSV[i].Diem < danhSachSV[j].Diem)
            {
                swap(danhSachSV[i], danhSachSV[j]);
            }
        }
    }
}

// l. Chuyển lớp của sinh viên có mã vừa nhập bằng lớp mới vừa nhập
void chuyenLopSinhVienTheoMaSV(Sinhvien danhSachSV[], int soLuongSV, int maSV, const string& lopMoi)
{
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].MaSV == maSV)
        {
            danhSachSV[i].Lop = lopMoi;
            break; // Sau khi tìm thấy sinh viên cần chuyển lớp, thoát khỏi vòng lặp
        }
    }
}

// n. Đưa ra danh sách sinh viên đạt điểm lớn nhất của lớp vừa nhập
void sinhVienDiemMaxCuaLop(const Sinhvien danhSachSV[], int soLuongSV, const string& lop)
{
    double maxDiem = -1;
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Lop == lop && danhSachSV[i].Diem > maxDiem)
        {
            maxDiem = danhSachSV[i].Diem;
        }
    }

    cout << "Danh sach sinh vien co diem lon nhat cua lop " << lop << ":" << endl;
    for (int i = 0; i < soLuongSV; ++i)
    {
        if (danhSachSV[i].Lop == lop && danhSachSV[i].Diem == maxDiem)
        {
            cout << "MaSV: " << danhSachSV[i].MaSV << ", Ho ten: " << danhSachSV[i].Hoten << ", Lop: " << danhSachSV[i].Lop << ", Diem: " << danhSachSV[i].Diem << endl;
        }
    }
}

// o. Xóa sinh viên ở vị trí cuối cùng trong danh sách.
void xoaSinhVienCuoiDanhSach(Sinhvien danhSachSV[], int& soLuongSV)
{
    if (soLuongSV > 0)
    {
        soLuongSV--;
    }
    else
    {
        cout << "Danh sach sinh vien rong, khong co sinh vien de xoa!" << endl;
    }
}

int main()
{
    Sinhvien danhSachSinhVien[MAX_SINHVIEN];
    int soLuongSV = 0;

    // a. Nhập một danh sách sinh viên
    nhapDanhSachSinhVien(danhSachSinhVien, soLuongSV);

    // b. Hiển thị danh sách sinh viên ra màn hình
    hienThiDanhSachSinhVien(danhSachSinhVien, soLuongSV);

    // Các yêu cầu khác có thể gọi các hàm tương ứng ở đây để thực hiện.

    return 0;
}
