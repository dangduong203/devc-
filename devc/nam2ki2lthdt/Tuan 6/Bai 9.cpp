#include<iostream>
#include<string.h>
using namespace std;
struct DATE {
	int ngay, thang, nam;
};
class GIAODICHNHADAT {
	protected:
		char ma[10];
		DATE ngayDD;
		float DonGia;
		float DienTich;
public: 
	virtual void nhap() {
		cout << "Nhap Ma Giao Dich: "; cin.getline(ma, 10);
		cout << "Nhap Thoi Gian Giao Dich: ";
		cout << "\nNgay: "; cin >> ngayDD.ngay;
		cout << "Thang: "; cin >> ngayDD.thang;
		cout << "Nam: "; cin >> ngayDD.nam;
		cout << "Nhap Don Gia: ";cin>> DonGia;
		cout << "Nhap Dien Tich: "; cin >> DienTich;
	}
	virtual float thanhTien() = 0;
	virtual void xuat() {
		cout << "\nMa Giao Dich: " << ma
			<< "\nNgay Giao Dich: " << ngayDD.ngay << "/" << ngayDD.thang << "/" << ngayDD.nam
			<< "\nDon Gia: " << DonGia
			<< "\nDien Tich: " << DienTich;
	}
	DATE getNgayDD() {
		return ngayDD;
	}
};
class GIAODICHDAT :public GIAODICHNHADAT {
private: 
	char LoaiDat[1];
public: 
	void nhap() {
		GIAODICHNHADAT::nhap();
		cin.ignore();
		cout << "Nhap Loai Dat: "; cin.getline(LoaiDat, 1);
	}
	float thanhTien() {
		if (strcmp(_strupr(LoaiDat), "A") == 0)return DienTich * DonGia * 1.5;
		 if (strcmp(_strupr(LoaiDat), "B")==0|| strcmp(_strupr(LoaiDat), "C") == 0)return DienTich * DonGia;
		
	}
	void xuat() {
		GIAODICHNHADAT::xuat();
		cout << "\nLoai Dat: " << LoaiDat
			<< "\nThanh Tien: " << thanhTien() << endl;
	}

};
class GIAODICHNHA :public GIAODICHNHADAT {
private:
	char loaiNha[10];
public:
	void nhap() {
		GIAODICHNHADAT::nhap();
		cout << "Nhap Loai Nha: "; cin.getline(loaiNha, 10);
	}
	float thanhTien() {
		if (strcmp(loaiNha,"cao cap")==0)return DienTich * DonGia;
		if (strcmp(_strupr(loaiNha), "thuong") == 0 )return DienTich * DonGia*0.9;

	}
	void xuat() {
		GIAODICHNHADAT::xuat();
		cout << "\nLoai Nha: "<<loaiNha
			<< "\nThanh Tien: " << thanhTien() << endl;
	}
	

};
class QUANLYGIAODICH {
private: 
	GIAODICHNHADAT* a[20];
	int gDn = 0, gDd = 0;
	int n;
	float TongTienGDD = 0;
public: 
	void nhap() {
		int chon;
		int i = 0;
		cout << "\n1.Giao Dich Dat\n1.Giao Dich Nha" << endl;
		cout << "Nhap Lua Chon: "; cin >> chon;
		while (chon == 1 || chon == 2) {
			if (chon == 1) {
				a[i] = new GIAODICHDAT();
				gDd++;
			}
			if (chon == 2) {
				a[i] = new GIAODICHNHA();
				gDn++;
			}
			a[i]->nhap();
			i++;
			n = i;
			if (chon == 1)TongTienGDD += a[i]->thanhTien();
		}
	}
	void xuat() {
		for (int i = 0; i < n; i++) {
			a[i]->xuat();
		}
	}
	void SoluongGiaoDich() {
		cout << "\nSo Luong Giao Dich Dat: " << gDd
			<< "\nSo luong Giao Dich Nha: " << gDn << endl;
	}
	void GD913() {
		cout << "\n-Danh Sach Cac Giao Dich Thang 9 nam 2013" << endl;
		for (int i = 0; i < n; i++) {
			if (a[i]->getNgayDD().thang == 13 && a[i]->getNgayDD().nam == 2013)a[i]->xuat();
		}
	}
};
int main() {
	QUANLYGIAODICH a;
	a.nhap();
	a.xuat();
	a.SoluongGiaoDich();
	a.GD913();
	return 0;
}
