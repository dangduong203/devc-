#include<iostream>
using namespace std;
class MatHang {
protected:
	char ten[20];
	int sl;
	float gia;
	float tongGiaHang;
public:
	virtual void nhap() {
		cout << "Nhap Ten Mat Hang: "; cin.getline(ten, 20);
		cout << "Nhap So Luong: "; cin >> sl;
		cout << "Nhap Gia moi mat hang: "; cin >> gia;
		tongGiaHang = sl * gia;
	}
	virtual void xuat() {
		cout << "\nTen Mat Hang: " << ten
			<< "\nSo Luong: " << sl;
	}
	
};
class HANGNHAPKHAU :public MatHang {
private: 
	float thue;
public:
	void nhap() {
		MatHang::nhap();
		thue = tongGiaHang * 0.2;
	}
	

	void xuat() {
		MatHang::xuat();
		cout << "\nGia Thue: " << thue
			<< "\nTong Gia Sau Thue: " << tongGiaHang + thue << endl;
	}
	
};
class HANGDAILY :public MatHang {
private:
	float TienHH;
public: 
	void nhap() {
		MatHang::nhap();
		TienHH = tongGiaHang * 0.3;
	}
	void xuat() {

		MatHang::xuat();
		cout << "\nTien Hoa Hong: " << TienHH
			<< "\nTong Gia: " << tongGiaHang + TienHH << endl;
	}
};
class QUANLYKHO {
private:

	MatHang* a[20];
	int HangDaiLy= 0, HangNhapKhau = 0;
	int n;
	public:
		void nhapKho() {

			int chon, i = 0;
			cout << "\n1.Hang Nhap Khau\n2.Hang Dai Ly" << endl;;
			cin >> chon;
			while (chon == 1 || chon == 2) {
				if (chon == 1) {
					a[i] = new HANGNHAPKHAU();
					HangNhapKhau++;
				}
				if (chon == 2) {
					a[i] = new HANGDAILY();
					HangDaiLy++;
				}
				a[i]->nhap();
				i++;
				n = i;
			}
		}
		void xuatKho() {
			for (int i = 0; i < n; i++) {
				a[i]->xuat();
			}
		}
		void baoCaoSoLuong() {
			cout << "\nHang Nhap Khau: " << HangNhapKhau
				<< "\nHang Dai Ly: " << HangDaiLy << endl;
		}
};
int main() {
	QUANLYKHO a;
	a.nhapKho();
	a.xuatKho();
	a.baoCaoSoLuong();
	return 0;
}