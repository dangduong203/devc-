#include<iostream>
using namespace std;
class JSP {
protected:
	char name[20];
	int number;
public:
	virtual void nhap() {
		cin.ignore();
		cout << "Nhap Ho Va Ten: "; cin.getline(name, 20);
		cout << "Nhap So Dien Thoai: "; cin >> number;
	}
	virtual int tienthuebao() = 0;

	virtual void xuat() {
		cout << "\nHo Va ten: " << name;
		cout << "\nSo Dien Thoai: " << number << endl;
	}


};
class DialUp : public JSP {
protected:

	int phut;
public:

	void nhap() {

		JSP::nhap();
		cout << "Nhap phut: "; cin >> phut;
	}
	int tienthuebao() {
		return 30000 + (30 * phut);
	}
	void xuat() {
		JSP::xuat();
		cout << "\nGia Cuoc Thue bao: " << tienthuebao();
	}
};
class ADSL :public JSP {
protected:
	int mb;
public:

	void nhap() {
		cout << "Nhap ADSL: " << endl;
		JSP::nhap();
		cout << "Nhap dung luong: "; cin >> mb;
	}
	int tienthuebao() {
		return 50000 + (50 * mb);
	}
	void xuat() {
		JSP::xuat();
		cout << "\nGia cuoc thue bao: " << tienthuebao();
	}
};
class T1 :public JSP {
public:


	int	tienthuebao() {
		return 200000;
	}
	void xuat() {
		JSP::xuat();
		cout << "\nGia cuoc thue bao: " << tienthuebao();
	}
};
class quanly {
public:
	JSP* a[20];
	int  i = 0;
	float sum = 0;
	void nhap() {
		int c; cin >> c;
		while (c == 1 || c == 2 || c == 3) {

			if (c == 1)

				a[i] = new DialUp();

			else	if (c == 2) a[i] = new ADSL();

			else if (c == 3) a[i] = new T1();

			a[i]->nhap();
			sum += a[i]->tienthuebao();

			cin >> c;

			i++;
		}
	}
	void Tongtienthuebao() {
		cout << size_t(sum) << endl;
	}
};
int main() {
	quanly a;
	a.nhap();
	a.Tongtienthuebao();
	a.xuat();
}


