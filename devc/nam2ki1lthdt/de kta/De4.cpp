
#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
class HangHoa {
private:
	char ma[15], ten[20], nhaSX[20];
	float donGia;
public:
	friend istream& operator >> (istream& is, HangHoa& a) {
		cout << "\n|| Nhap ma Hang Hoa: "; is.getline(a.ma, 15);
		cout << "|| Nhap Ten Hang Hoa: "; is.getline(a.ten, 20);
		cout << "|| Nhap Nha San Xuat: "; is.getline(a.nhaSX, 20);
		cout << "|| Nhap Don Gia: "; is >> a.donGia;
		is.ignore();
		return is;

	}
	friend ostream& operator << (ostream& os, HangHoa a) {
		os << "|" << setw(15) << a.ma
			<< "|" << setw(20) << a.ten
			<< "|" << setw(20) << a.nhaSX
			<< "|" << setw(15) << a.donGia << "|";
		return os;

	}

	bool  operator == (char* a) {
		return strcmp(_strupr(this->nhaSX), a) == 0;
	}
	float getDonGia() {
		return this->donGia;
	}
};
void keBang() {
	cout << endl;
	for (int i = 0; i < 79; i++) {
		cout << "-";
	}
	cout << endl;
}
void TieuDe() {
	keBang();
	cout << "|" << setw(4) << "STT"
		<< "|" << setw(15) << "Ma Hang Hoa"
		<< "|" << setw(20) << "Ten Hang Hoa"
		<< "|" << setw(20) << "Nha San Xuat"
		<< "|" << setw(15) << "Don Gia" << "|";
	keBang();
}
int SoLuongHangHoaHongHa(HangHoa* a, int n) {
	char b[] = "HONG HA";
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == b) dem++;
	}
	return dem;
}
void Max(HangHoa* a, int& n) {
	int max = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].getDonGia() > a[j].getDonGia()) {
				max = i;
				swap(a[i], a[j]);
			}
			else max = j;
		}
	}
	cout << "\n\n======= Hang Hoa Co Don Gia Lon Nhat ========" << endl;
	TieuDe();
	cout << "|" << setw(4) << "1" << a[max];
	keBang();

}

void DanhSachSauKhiSapXep(HangHoa* a, int n) {
	cout << "\n\n======= Danh Sach Sau Khi Sap Xep ========" << endl;
	TieuDe();
	for (int i = 0; i < n; i++) {

		cout << "|" << setw(4) << i + 1 << a[i];
		keBang();
	}
}
int main() {
	HangHoa* a;
	int n;
	cout << "Nhap n: "; cin >> n;
	cin.ignore();
	a = new HangHoa[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << " \n-|| So Luong Sach Cua Nha Xuat Ban Hong Ha La: " << SoLuongHangHoaHongHa(a, n);
	Max(a, n);
	DanhSachSauKhiSapXep(a, n);


	delete[]a;
	return  0;

}