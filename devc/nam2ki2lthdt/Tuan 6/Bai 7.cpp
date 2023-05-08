#include<iostream>
using namespace std;
class CHUYENXE {
private: 
	char msChuyen[20];
	char httx[20];
	int soXe;
public:
	virtual void nhap() {
		cin.ignore();
		cout << "Nhap Ma So Chuyen: "; cin.getline(msChuyen, 20);
		cout << "Nhap Ho Ten Tai Xe: "; cin.getline(httx, 20);
		cout << "Nhap So Xe: "; cin >> soXe;

	}
	virtual void xuat() {
		cout << "\nMa So Tuyen: " << msChuyen
			<< "\nHo Ten Tai Xe: " << httx
			<< "\nSo Xe: " << soXe;
	}
	virtual float getDoanhThu() = 0;

};
class XENOITHANH :public CHUYENXE {
private:
	int soTuyen, soKM;
	float doanhThu;
public: 
	void nhap() {
		CHUYENXE::nhap();
		cout << "Nhap So Tuyen: "; cin >> soTuyen;
		cout << "Nhap So KM Di Duoc: "; cin >> soKM;
		cout << "Nhap Doanh Thu: "; cin >> doanhThu;
	}
	void xuat() {
		CHUYENXE::xuat();
		cout << "\nSo Tuyen: " << soTuyen
			<< "\n So KM Di Duoc: " << soKM
			<< "\nDoanh Thu: " << doanhThu << endl;
	}
	float getDoanhThu() {
		return doanhThu;
	}
};
class XENGOAITHANH :public CHUYENXE {
private:
	char noiDen[20];
	int snDiDuoc;
	float doanhThu;
public:
	void nhap() {
		CHUYENXE::nhap();
		cin.ignore();
		cout << "Nhap Noi Den: "; cin.getline(noiDen, 20);
		cout << "Nhap So Ngay Di Duoc: "; cin >> snDiDuoc;
		cout << "Nhap Doanh Thu: "; cin >> doanhThu;
	
	}
	void xuat() {
		CHUYENXE::xuat();
		cout << "\nNoi Den: " << noiDen
			<< "\nSo Ngay Di Duoc: " << snDiDuoc
			<< "\nDoanh Thu: " << doanhThu << endl;
	}
	float getDoanhThu() {
		return doanhThu;
	}
};
class QuanLY {
private:
	CHUYENXE* a[30];
	float sum = 0;
	float sum1=0;
	int n;
public:
	void nhap() {
		int chon;
		int i = 0;
		
		cout << "\n1.Xe Noi Thanh\n2.Xe Ngoai Thanh" << endl;
		cout << "Nhap Lua Chon: "; cin >> chon;
		while (chon == 1 || chon == 2) {
			if (chon == 1)a[i] = new XENOITHANH();
			if (chon == 2)a[i] = new XENGOAITHANH();
			a[i]->nhap();
			if (chon == 1)sum += a[i]->getDoanhThu();
			if (chon == 2)sum1 += a[i]->getDoanhThu();
			i++;
			n = i;
			
			cout << "\n1.Xe Noi Thanh\n2.Xe Ngoai Thanh" << endl;
			cout << "Nhap Lua Chon: "; cin >> chon;
		}

	}
	void xuat() {
		for (int i = 0; i < n; i++) {
			a[i]->xuat();
			
		}
	}
	void tongDoanhThu() {
		cout << "\n-Tong Doanh Thu Cua Xe Noi Thanh: " << sum << endl;
		cout << "-Tong Doanh Thu Cua Xe Ngoai Thanh: " << sum1 << endl;
	}
};
int main() {
	QuanLY a;
	a.nhap();
	a.xuat();
	a.tongDoanhThu();
	return 0;
}