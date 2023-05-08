#include<iostream>
using namespace std;
class CAUTHU {
protected:
	char cmnd[20];
	char ten[20];
	char quoctich[20];
	int ns;
	int  chieucao, cannang;
	char viTri[20];
public:
	 void nhapct() {
		cout << "Nhap Cmnd: "; cin.getline(cmnd, 20);
		cout << "Nhap Ten: "; cin.getline(ten, 20);
		cout << "Nhap quoc tich: "; cin.getline(quoctich, 20);
		cout << "Nhap Nam sinh: "; cin >> ns;
		cout << "Nhap Chieu Cao: "; cin >> chieucao;
		cout << "Nhap Can Nang: "; cin >> cannang;
		cin.ignore();
		cout << "Nhap Vi Tri: "; cin.getline(viTri, 20);
	}
     void xuatct() {
		cout << "\nCmnd: " << cmnd
			<< "\nTen: " << ten
			<< "\nQuoc Tich: " << quoctich
			<< "\nChieu Cao: " << chieucao
			<< "\t Can Nang: " << cannang
			<< "\nVi Tri: " << viTri;
	}
	 int getChieuCao() {
		 return chieucao;
	 }
	
};
class DOIBONG:public CAUTHU{
	
protected:
	char tendb[20];
	char adr[20];

public:
	void nhapdb() {
		cout << "Nhap Ten Doi Bong: "; cin.getline(tendb, 20);
		cout << "Nhap Dia Chi Doi Bong: "; cin.getline(adr, 20);
		
	}
	void xuatdb() {
		cout << "\nTEN DOI: " << tendb
			<< "\nDia Chi: " << adr;
		
	}
};

class GIAIDAU {
protected:
	DOIBONG a[20];
	int n;
	CAUTHU b[20];
	int m;

	
public: 
	
	void nhap() {
		cout << "nhap so luong doi bong cua giai: "; cin >> n;
		cin.ignore();
		for (int i = 0; i < n; i++) {
			a[i].nhapdb();
			cout << "Nhap so luong cau thu: "; cin >> m;
			cin.ignore();
			cout << "-Nhap Danh sach Cau Thu Cua Doi Bong: "<< endl;
			for (int i = 0; i < m; i++) {
				cout << "-Cau Thu Thu:  " << i + 1 << endl;
				b[i].nhapct();
		
			}
			}
		
		}
	
	void xuat() {
		for (int i = 0; i < n; i++) {
			a[i].xuatdb();
			cout << "\n-Danh Sach Cau Thu Cua Doi Bong: " << endl;
			for (int i = 0; i < m; i++) {

				cout << "-Cau Thu Thu:  " << i + 1 << endl;
				b[i].nhapct();

			}
		}
	}

	void cauthucaonhat() {
		CAUTHU  max;
		for (int i = 0; i < m - 1; i++) {
			for (int j = i + 1; j < m; j++) {
				max = a[i];
				if (max.getChieuCao() < a[j].getChieuCao())max = a[j];
			}
		}
	}
	
};
int main() {
	GIAIDAU a;
	a.nhap();
	a.xuat();
	a.cauthucaonhat();
	return 0;
}