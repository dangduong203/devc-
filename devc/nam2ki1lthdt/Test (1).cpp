#include<iostream>
#include<cstring>
using namespace std;
class Nguoi {
private:
	int cmt;
	char ten[20];
	int tuoi;
public:
	Nguoi(){}
	Nguoi(int cmt, char* ten, int tuoi) {
		this->cmt = cmt;
		strcpy(this->ten, ten);
		this->tuoi = tuoi;
	}
	~Nguoi() {}
	void nhap() {
		cout << "Nhap CMT: "; cin >> cmt;
		cin.ignore();
		cout << "Nhap Ten: "; cin.getline(ten, 20);
		cout << "Nhap tuoi: "; cin >> tuoi;

	}
	void xuat() {
		cout << "\nNhap CMT: " << cmt;
		cout << "\nNhap Ten: " << ten;
		cout << "\nNhap tuoi: " << tuoi << endl;
	}
	int getTuoi() {
		return tuoi;
	}
	char* getTen() {
		return ten;
	}
	int getCMT() {
		return cmt;
	}
};
void TuoiKhac10(Nguoi a[], int n) {
	cout << "\n-Nhung nguoi co tuoi khac 10: " << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].getTuoi() != 10) {
			a[i].xuat();
		}
	}
}
void XuatTheoTen(Nguoi a[], int n) {
	cout << "\n-Nhung nguoi ten Anh " << endl;
	for (int i = 0; i < n; i++) {
		if (strstr(_strlwr(a[i].getTen()), "anh")) {
			a[i].xuat();
		}
	}
}
void suaThongTin(Nguoi a[], int n) {

	int cmt; 
	cout << "Nhap CMT Nguoi Can Sua: "; cin >> cmt;
	for (int i = 0; i < n; i++) {
		if (cmt == a[i].getCMT()) {
			a[i].nhap();
		}
	}
	cout << "\n- Danh Sach Sau khi Sua: " << endl;
	for (int i = 0; i < n; i++) {
			a[i].xuat();
		
	}
}
int main() {
	Nguoi* a;
	int n;
	cout << "Nhap So Luong : "; cin >> n;
	a = new Nguoi[n];
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
	XuatTheoTen(a, n);
	TuoiKhac10(a, n);
	suaThongTin(a,n);
	delete[]a;
	return  0;
}