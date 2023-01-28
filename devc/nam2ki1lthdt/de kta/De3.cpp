#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
class Sach {
private:
	char ma[20];
	char ten[20];
	int soLuong;
	float donGia;
public:
	Sach() {}
	Sach(char* ma, char* ten, int soluong, float dongia) {
		strcpy(this->ma, ma);
		strcpy(this->ten, ten);
		this->soLuong = soluong;
		this->donGia = dongia;
	}
	~Sach() {}
	friend istream& operator >>(istream& is, Sach& a) {
		is.ignore();
		cout << "\n|| Nhap Ma Sach: "; is.getline(a.ma, 20);
		cout << "|| Nhap Ten Sach: "; is.getline(a.ten, 20);
		cout << "|| Nhap So Luong: "; is >> a.soLuong;
		cout << "|| Nhap Don Gia: "; is >> a.donGia;
		return is;
	}
	friend ostream& operator << (ostream& os, Sach a) {
		os << "|" << setw(10) << a.ma
			<< "|" << setw(15) << a.ten
			<< "|" << setw(20) << a.soLuong
			<< "|" << setw(20) << a.donGia
			<< "|" << setw(20) << a.ThanhTien() << "|";
		return os;
	}
	char* getMa() {
		return this->ma;
	}
	float ThanhTien() {
		return soLuong * donGia;
	}
	int getSoLuong() {
		return this->soLuong;

	}
};

void kebang() {
	cout << endl;
	for (int i = 0; i < 95; i++) {
		cout << "-";
	}
	cout << endl;
}
void TieuDe() {
	kebang();
	cout << "|" << setw(4) << "STT"
		<< "|" << setw(10) << "Ma Sach"
		<< "|" << setw(15) << "Ten Sach"
		<< "|" << setw(20) << "So Luong"
		<< "|" << setw(20) << "Don Gia"
		<< "|" << setw(20) << "Thanh Tien" << "|";
	kebang();
}
void sachCoThanhTienLonNhat(Sach* a, int n) {
	int max = 0;

	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].ThanhTien() > a[j].ThanhTien())max = i;
			else max = j;
		}
	}

	cout << "\n======Sach Co Thanh Tien Lon Nhat La======= " << endl;
	TieuDe();
	cout << "|" << setw(4) << "1" << a[max];
	kebang();
}
void TimKiemTheoMA(Sach* a, int n) {

	char maCanTim[20];
	int dem = 1;
	cin.ignore();
	cout << "\n|| Nhap Ma Sach Can Tim: ";
	cin.getline(maCanTim, 20);
	cout << "\n ===== Sach Can Tim =====" << endl;
	TieuDe();
	for (int i = 0; i < n; i++) {
		if (strcmp(maCanTim, a[i].getMa()) == 0) {

			cout << "|" << setw(4) << "1" << a[i];
			kebang();
		}
	}

}
void SapXepGiamDan(Sach* a, int n) {
	cout << "\n===== Danh Sach Sau Khi Sap Xep ====" << endl;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].ThanhTien() < a[j].ThanhTien())swap(a[i], a[j]);

		}
	}
	TieuDe();
	for (int i = 0; i < n; i++) {
		cout << "|" << setw(4) << i + 1 << a[i];
		kebang();
	}

}

int main() {
	Sach* a;
	int n;
	cout << "\nNhap So Loai Sach: "; cin >> n;
	a = new Sach[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}
	sachCoThanhTienLonNhat(a, n);
	TimKiemTheoMA(a, n);
	SapXepGiamDan(a, n);
	delete[]a;
	return 0;
}
