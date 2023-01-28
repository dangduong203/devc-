#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;
struct SanPham{
	char masp[10];
	char tensp[20];
	double dongia, thanhtien;
	int soluong;
};
void danhsach(SanPham a[], int n){
	for (int i = 0; i < n; i++){
		cout<<"san pham thu"<<i+1;
		cin.ignore(); 
		cout << "Nhap ma san pham: ";
		cin.getline(a[i].masp, 11);
		cout << "Nhap ten san pham: ";
		cin.getline(a[i].tensp, 21);
		cout << "Nhap don gia: ";
		cin >> a[i].dongia;
		cout << "So luong: ";
		cin >> a[i].soluong;  
	}
}
void Xuat(SanPham a[], int n){
	cout << "DANH SACH SAN PHAM DA NHAP: \n";
    cout << " | " << setw(20) << "Ma san pham";
    cout << " | " << setw(20) << "Ten san pham";
    cout << " | " << setw(20) << "Don gia";
    cout << " | " << setw(20) << "So luong";
    cout << endl;
     for (int i = 0; i < n; i++){
        cout << " | " << setw(20) << a[i].masp;
        cout << " | " << setw(20) << a[i].tensp;
        cout << " | " << setw(20) << a[i].dongia;
        cout << " | " << setw(20) << a[i].soluong;
        cout << endl;
    }
}
void Sanpham(SanPham a[], int n){
	cout << "DANH SACH CAC SAN PHAM CO GIA TREN 200K LA" << endl;
	for (int i = 0; i < n; i++){
		if (a[i].dongia > 200000){
			cout << a[i].tensp << " ";
		}
	}
	cout << endl;
	
}
void Tinhtien(SanPham a[], int n){
	cout << "Gia thanh cua san pham la: ";
	for (int i = 0; i < n; i++){
		a[i].thanhtien = a[i].soluong * a[i].dongia;
		cout << a[i].thanhtien << " ";
	}	
}
int main (){
	SanPham a[1000];
	int n, bang;
	
	cout << "Nhap 1: De nhap danh sach san pham" << endl; 
	cout << "Nhap 2: De in ra danh sach san pham" << endl;
	cout << "Nhap 3: De in ra cac san pham co gia lon hon 200k" << endl;
	cout << "Nhap 4: De tinh tien san pham" << endl;
	while (bang >= 1 or bang <= 4){
	cin >> bang;
	
	switch (bang){
		case 1: 
		cout << "Nhap so luong san pham: ";
		cin >> n;
		danhsach(a, n);
		break;
		case 2:
		Xuat(a, n);
		cout << endl;
		break;
		case 3:
		Sanpham(a, n);
		cout << endl;
		break;
		case 4:
		Tinhtien(a, n);
		cout << endl;
		break;
		}
		cout << endl;
		cout << "Lua chon menu de tiep tuc" << endl;
		 
		cout << "Nhap 2: De in ra danh sach san pham" << endl;
		cout << "Nhap 3: De in ra cac san pham co gia lon hon 200k" << endl;
		cout << "Nhap 4: De tinh tien san pham" << endl;
		
	}
	
	return 0;
}