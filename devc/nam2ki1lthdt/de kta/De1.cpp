#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
class Truong {
private:
    char Ten[20], diaChi[20];
    int soSinhVien, nam;
public:
    Truong() {};
    Truong(char* ten, char* diachi, int sosinhvien, int nam) {
        strcpy(Ten, ten);
        strcpy(diachi, diaChi);
        this->soSinhVien = sosinhvien;
        this->nam = nam;

    }
    ~Truong() {};
    friend istream& operator >> (istream& is, Truong& a) {
        cin.ignore();
        cout << "\nNhap Ten Truong: "; is.getline(a.Ten, 20);
        cout << "Nhap Dia Chi: "; is.getline(a.diaChi, 20);
        cout << "Nhap So Luong  Sinh Vien: "; is >> a.soSinhVien;
        cout << "Nhap Nam Thanh Lap: "; is >> a.nam;
        return is;
    }
    int getNam() {
        return this->nam;
    }
    friend ostream& operator << (ostream& os, Truong a) {
        os << "\nTen Truong: " << a.Ten;
        os << "\nDia chi: " << a.diaChi;
        os << "\nSo Luong Sinh Vien: " << a.soSinhVien;
        os << "\nNam Thanh Lap: " << a.nam;
        return os;
    }
    char* getDiaChi() {
        return diaChi;
    }

};
int timkiem(Truong a[], int n) {
    int min = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].getNam() > a[j].getNam()) min = j;
            else min = i;
        }
    }
    return min;

}
int truongHN(Truong a[], int n) {
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (strstr(_strlwr(a[i].getDiaChi()), "ha noi")) {
            dem++;
        }
    }
    return dem;
}


int main() {

    int  n;
    cout << "Nhap So Luong Truong Hoc: "; cin >> n;
    Truong* a = new Truong[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << a[timkiem(a, n)];
    for (int i = 0; i < n; i++) {
        cout << "\nTruong thu " << i + 1;
        cout << a[i];
    }
    cout << "\nSo Luong Truong Hoc Tai Ha Noi La: " << truongHN(a, n) << endl;
    return  0;
}