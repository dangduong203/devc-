#include<iostream>
#include<string.h>
using namespace std;
class GV {
private:
	char ht[30];
	int tuoi;
	char bc[20];
	char cn[20];
	int bl;
public:
	friend istream& operator >>(istream& is, GV& a) {
		is.ignore();
		cout << "Nhap Ho Ten: "; is.getline(a.ht, 30);
		cout << "Nhap Tuoi: "; is >> a.tuoi;
		is.ignore();
		cout << "Nhap Bang Cap: "; is.getline(a.bc, 20);
		cout << "Nhap Chuyen Nganh: "; is.getline(a.cn, 20);
		cout << "Nhap Bac Luong: "; is >> a.bl;
		cout<<endl;
		return is;
	}
	friend ostream& operator<<(ostream& os, GV a) {
		os << "\nHo Ten: " << a.ht
			<< "\nTuoi: " << a.tuoi
			<< "\nBang Cap: " << a.bc
			<< "\nChuyen Nganh: " << a.cn
			<< "\nBac Luong: " << a.bl << endl;
		return os;
	}
	float luongcb() {
		return bl * 610;
	}
	char* getten() {
		return ht;
	}
};
void XuatGV(GV*a,int n) {
	cout << "\n---- Thong tin cac giao vien co luong < 2000 ----" << endl;
	for (int i = 0; i < n; i++) {
		if (a[i].luongcb() < 2000) {
			cout << " ---Giao vien thu " << i+1 ;
			cout << a[i];
			cout<<endl;
		}
	}
}
void timkiem(GV* a, int& n) {
	cin.ignore();
	char ten[20];
	cout << "Nhap ten GV can Tim: "; cin.getline(ten, 20);
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(a[i].getten(),ten)==0) {
			cout << "Luong cua giao vien can tim la: ";
			cout << a[i].luongcb()<< endl;
			dem++;
		}
	}	
	if(dem==0){
		cout << "\nKhong tim Thay Giao Vien Tren!" << endl;
		cout<<"Nhap Thong Tin Giao Vien Can Them :";
		cin >> a[n];
		n++;
		cout << "\n-Danh Sach Giao Vien Sau khi them: " << endl;
		for (int i = 0; i < n; i++) {
		cout << "\n-Thong tin GV thu " << i + 1 ;
		cout << a[i];
	 }
	}
	
}
int main() {
	GV* a;
	int n;
	cout << "Nhap so luong giao vien: "; 
	cin >> n;
	a = new GV[n];
	for (int i = 0; i < n; i++) {
		cout<<"--Nhap Giao Vien Thu "<<i+1<<endl;
		cin >> a[i];
	}
	XuatGV(a, n);
	timkiem(a, n);
	return 0;
}
