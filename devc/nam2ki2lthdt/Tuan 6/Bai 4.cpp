#include<iostream>
#include<math.h>
using namespace std;
const float PI = 3.14;
class SHAPE {
public:
	virtual void nhap() = 0;
	virtual float chuVi() = 0;
	virtual float dienTich() = 0;
	virtual float theTich() = 0;
	virtual void xuat() = 0;
};
class ROUND :public SHAPE {
private:
	int r;
public:
	void nhap() {
		cout << "-Nhap Ban Kinh: "; cin >> r;
	}
	float chuVi() {
		return (2 * PI * r);
	}
	float dienTich() {
		return PI * r * r;
	}
	float theTich() {
		return 4 *PI*pow(r, 3) / 3;
	}
	void xuat() {
		cout << "\n-Ban Kinh: " << r
			<< "\n-Dien Tich: " << dienTich()
			<< "\n-Chu Vi: " << chuVi()
			<< "\n-The Tich: " << theTich();

	}
};
class REC :public SHAPE {
private:
	float d, r,h;
public:
	void nhap() {
		cout << "Nhap Chieu Dai: "; cin >> d;
		cout << "Nhap Chieu Rong: "; cin >> r;
		cout << "Nhap Chieu Cao Hinh 3 chieu: "; cin >> h;
	}
	float chuVi() {
		return 2 * (d + r);
	}
	float dienTich() {
		return d * r;
	}
	float theTich() {
		return d * r * h;
	}
	void xuat() {
		cout << "\n-Chieu Dai: " << d
			<<"\n-Chieu  Rong: "<<r
			<<"\n-Chieu Cao: "<<h
			<< "\n-Dien Tich Mat Day: " << dienTich()
			<< "\n-Chu Vi Mat Day: " << chuVi()
			<< "\n-The Tich: " << theTich();
	}
};

class TRI :public SHAPE {
private:
	float a, b, c, h;

public:
	void nhap() {
		do {
			cout << "Nhap do dai 3 canh cua tam giac: "; cin >> a; cin >> b; cin >> c;
		} while (a + b <= c || a + c <= b || b + c <= a);
		cout << "Nhap Chieu Cao Hinh 3 chieu: "; cin >> h;
	}
	float chuVi() {
		return a + b + c;
	}
	float dienTich() {
		float p = (a + b + c) / 2;
		return sqrt(p * (p - a) * (p - b) * (p - c));
	}
	float theTich() {
		return dienTich() * h;
	}
	void xuat() {
		cout << "\n-DO Dai 3 Canh: " << a << "\t" << b << "\t" << c
			<< "\n-Chieu Cao: " << h
			<< "\n-Dien Tich Mat Day: " << dienTich()
			<< "\n-Chu Vi Mat Day: " << chuVi()
			<< "\n-The Tich: " << theTich() << endl;
	}
};


class QuanLY {
public:
	SHAPE* a[30];
	int n;
	void quanly() {
		float chuVi = 0, dienTich = 0;
		int chon;
		int i = 0;
		cout << "\n1.Nhap hinh Tron\n2.Nhap Hinh Chu Nhat\n3.Nhap hinh Tan Giac" << endl;
		cin >> chon;
		while (chon == 1 || chon == 2 || chon == 3) {

			if (chon == 1) a[i] = new ROUND();
			if (chon == 2)a[i] = new REC();
			if (chon == 3)a[i] = new TRI();
			a[i]->nhap();
			chuVi += a[i]->chuVi();
			dienTich += a[i]->dienTich();
			i++;
			n = i;
			cout << "\n1.Nhap hinh Tron\n2.Nhap Hinh Chu Nhat\n3.Nhap hinh Tan Giac" << endl;
			cin >> chon;
		}

	
	}
	void xuat() {
		for (int i = 0; i < n; i++) {
			a[i]->xuat();
		}
	}
	
};

int main() {
	QuanLY a;
	a.quanly();
	a.xuat();
}