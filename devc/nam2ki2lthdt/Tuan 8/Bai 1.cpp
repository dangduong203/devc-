#include<iostream>
using namespace std;
class Basic {
protected:
	int thoiGianGoi;
	int donGiaGoi = 1000;
	int luuLuong;
	int donGiaInternet;
public: 
	Basic(){}
	~ Basic(){}
	virtual int cuocDienThoai() {
		return thoiGianGoi * donGiaGoi;
	}
	virtual int cuocInternet()= 0;
	virtual void nhap() {
		cout << "Thoi Gian Goi: "; cin >> thoiGianGoi;
		cout << "Luu Luong: "; cin >> luuLuong;
	}
	virtual void xuat() {
		cout << "\n-Ten Goi Cuoc: Basic" << endl;
	}
	int cuocTong() {
		return cuocDienThoai() + cuocInternet();

  }

};
class datafree :public Basic {
private:
	int cuocThueBao;
	int Mp;
public: 
	datafree():Basic(){}
	~datafree(){}
	int cuocDienThoai() { 
		return Basic::cuocDienThoai();
	}
	int cuocInternet() {
		if (luuLuong <= Mp) {
			return cuocThueBao;
		}
		else {

			return cuocThueBao + ((luuLuong - Mp) * 200);
		}
	}
	void nhap() {
		Basic::nhap();
		cout << "Nhap cuoc thue bao: ";
		cin >> cuocThueBao;
		cout << "Nhap nguong luu luong mien phi: ";
		cin >> Mp;
	}
	void xuat() {
		cout << "\n-Ten Goi Cuoc: datafree";
	}
	int cuocTong() {
		return cuocInternet();
	}
};

class datafix :public Basic {
private: 
public:
	datafix() :Basic() {

	}
	~datafix() {

	}
	int cuocDienThoai() {
		return Basic::cuocDienThoai() * 0.9;
	}
	int cuocInternet() {
		return 1000000;
	}
	int cuocTong() {
		return 1.1*(cuocInternet() + cuocDienThoai());
	}
	void xuat() {
		cout << "\n-Ten Goi cuoc: datafix";
	}
};
class KhachHang {
private:
	char hoTen[30];
	char cmnd[20];
	char diaChi[20];
	Basic* goiCuoc;
public:
	KhachHang(){}
	~KhachHang(){}

	void nhap() {
		cin.ignore();
		cout << "Nhap Ho Ten: "; cin.getline(hoTen, 30);
		cout << "Nhap Cmnd: "; cin.getline(cmnd, 20);
		cout << "Nhap Dia Chi: "; cin.getline(diaChi, 20);
		int luachon, i = 0;
		
	
		tryagain:
	
		cout << "1.Goi Cuoc Datafree\n2.Goi cuoc datafix" << endl;
		cout << "Nhap Lua Chon: "; cin >> luachon;
		if (luachon == 1) goiCuoc = new datafree();
		if (luachon == 2) goiCuoc = new datafix();
		if (luachon != 1 && luachon != 2) goto tryagain;
		goiCuoc->nhap();
	}
	void xuat() {
		cout << "\nHo Va Ten: " << hoTen
			<< "\nCmcd: " << cmnd
			<< "\nDia Chi: " << diaChi
			<< "\nGoi Cuoc Dang Su Dung: "; goiCuoc->xuat();
		cout << "\nCuoc Cuoi Thang: " << goiCuoc->cuocTong();
	}
};

int main() {
	KhachHang a[100];
	int n;
	cout << "Nhap so Luong Khach Hang: "; cin >> n;
	
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	for (int i = 0; i < n; i++) {
		a[i].xuat();
		cout << endl;
		return 0;
	}
}