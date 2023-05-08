#include<iostream>
using namespace std;
class Quay {
private:
	char ma[20];
	int stt;
	float dienTich;
	float doanhThu;
public:
	virtual float thueDoanhThu() = 0;
	float tienthueQuay() {
		return 40000000 * dienTich;
	}
	virtual float tongTienPhaiDong() {
		return thueDoanhThu() + tienthueQuay();
	
	}
	virtual void check() = 0;
	virtual void nhap() {
		cin.ignore();
		cout << "Nhap Ma Quay: "; cin.getline(ma, 20);
		cout << "So Thu Tu Quay: "; cin >> stt;
		cout << "Dien Tich: "; cin >> dienTich;
		cout << "Doanh Thu: "; cin >> doanhThu;
	}
	virtual void xuat() {
		cout << "\nMa Quay: " << ma
			<< "\nSo Thu Tu Quay: " << stt
			<< "\nDien Tich: " << dienTich
			<< "\nDoanh Thu: " << doanhThu;
			

	}
	float getDoanhThu() {
		return doanhThu;
	}

};

class QuayThucPham :public Quay {
private:
	char loaiThucPham[20];
	public: 
		float thueDoanhThu() {
			return getDoanhThu() * 0.05;
		}
		float tienDongLanh() {
			if (strcmp(loaiThucPham, "thit") == 0)return 200000;
			else return 100000;
	}
		float  tongTienPhaiDong() {
			return thueDoanhThu() + tienthueQuay() + tienDongLanh();
	    }
		void nhap() {
			Quay::nhap();
			cin.ignore();
			cout << "Nhap Loai Thuc Pham: "; cin.getline(loaiThucPham, 20);
		}


		void check() {
			cout << "\nLoai Quay: Quay Thuc Pham";
		}
		void xuat() {
			Quay::xuat();
			check();
			cout << "\nTong Tien Phai Dong: " << size_t(tongTienPhaiDong());
		}
};

class QuayQuanAo :public Quay {
public:
	float thueDoanhThu() {
		return getDoanhThu() * 0.1;
	}
	float tongTienPhaiDong() {
		return thueDoanhThu() + tienthueQuay();
	}
	void check() {
		cout << "\nLoai Quay: Quay Quan Ao ";
	}
	void xuat() {
		Quay::xuat();
		check();
		cout << "\nTong Tien Phai Dong: " << size_t(tongTienPhaiDong());
	}
};
class QuayTrangSuc :public Quay {
public:
	float  thueDoanhThu() {
		if (getDoanhThu() < 100000000)return getDoanhThu() * 0.2;
		else return getDoanhThu() * 0.3;
	}
	float tongTienPhaiDong() {
		return thueDoanhThu() + tienthueQuay();
	}
	void check() {
		cout << "\nLoai Quay: Quay Trang Suc ";
	}
	void xuat() {
		Quay::xuat();
		check();
		cout << "\nTong Tien Phai Dong: " << size_t(tongTienPhaiDong());
	}
};

class QuanLySieuThi {
private:
	Quay* a[20];
	int n;
	float tongTienCacQuayPhaiDong = 0;
	int tp = 0, qa = 0, ts = 0;
public:

	void nhap() {
		int luachon, i = 0;
		
		cout << "1.Quay Thuc Pham\n2.Quay Quan Ao\n3.Quay Trang Suc\n4.Ket Thuc Nhap \n Nhap Lua chon: "; cin >> luachon;
		if (luachon > 4 || luachon <1)cin >> luachon;
		while (luachon > 0 && luachon <4) {
			if (luachon == 1) {
				a[i] = new QuayThucPham();
				tp++;
			}
			if (luachon == 2) {
				a[i] = new QuayQuanAo();
				qa++;
			}
			if (luachon == 3) {
				a[i] = new QuayTrangSuc();
				ts++;
			}
			if (luachon == 4)return;
			a[i]->nhap();
			tongTienCacQuayPhaiDong += a[i]->tongTienPhaiDong();
			i++;
			n = i;
			cout << "Nhap Lai Lua chon: ";
			cin >> luachon;
		}
	}
	void xuat() {
		cout << "\n-Danh Sach Cac Quay " << endl;
		for (int i = 0; i < n; i++) {
			cout << "\n";
			a[i]->xuat();
		}

		cout << "\n-Quay Thuc Pham: " << tp
			<< "\nQuay Quan Ao: " << qa
			<< "\nQuay Trang Suc: " << ts;
		cout << "\n-Tong Tien Cac Quay Phai Dong Hang Nam: " << size_t(tongTienCacQuayPhaiDong) << endl;
	}
};
int main() {
	QuanLySieuThi a;
	a.nhap();
	a.xuat();
	return 0;
}