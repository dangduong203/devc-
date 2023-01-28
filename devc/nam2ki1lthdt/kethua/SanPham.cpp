//Xay dung lop sp gom : ma ,  ten , namsx , cac phuong thuc nhap xuat
//xay dung lop tv : co thuoc tinh chieu dai va chieu rong ,
//hay xay dung phuong thuc tinh dien tich man hinh tv 

// sx tang dan theo dien tich cua man hinh tv
#include <iostream>
using namespace std;
class SanPham {
private:
	char ma[20], ten[20];
	int namsx;
public:

	void nhap() {
		cin.ignore();
		cout << "Nhap ma : "; cin.getline(ma, 20);
		cout << "Nhap ten : "; cin.getline(ten, 20);
		cout << "Nhap nam san xuat: "; cin >> namsx;

	}
	void xuat() {
		cout << "Ma : " << ma;
		cout << "\nTen: " << ten;
		cout << "\nNam San Xuat: " << namsx;
	}
};
class TV :public SanPham {
private:
	float cd, cr;
public:

	void nhapTV() {
		SanPham::nhap();
		cout << "Nhap chieu dai: "; cin >> cd;
		cout << "Nhap chieu rong: "; cin >> cr;
	}
	float DienTich() {
		return cd * cr;
	}
	void xuatTV() {
		SanPham::xuat();
		cout << "\nChieu dai: " << cd;
		cout << "\nChieu rong: " << cr;
		cout << "\nDien Tich: " << DienTich() << endl;
	}

};
int main() {
	TV* a;
	int n;
	cout << "\nNhap so luong tv: "; cin >> n;
	a = new TV[n];
	for (int i = 0; i < n; i++) {
		cout << "\nNhap thong tin TV thu" << i + 1 << endl;
		a[i].nhapTV();
	}for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].DienTich() > a[j].DienTich()) swap(a[i], a[j]);

		}
	}
	for (int i = 0; i < n; i++) {
		a[i].xuatTV();
	}
	delete[]a;
	return 0;
}