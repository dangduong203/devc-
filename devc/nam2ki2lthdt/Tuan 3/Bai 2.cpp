#include<iostream>
#include<math.h>
using namespace std;
class DATHUC3 {
private:
	int a, b, c, d;
public:
	DATHUC3(int a = 0, int b = 0, int c = 0, int d = 0) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	friend istream& operator>>(istream& is, DATHUC3& a) {
		cout << "Nhap a: "; cin >> a.a;
		cout << "Nhap b: "; cin >> a.b;
		cout << "Nhap c: "; cin >> a.c;
		cout << "Nhap d: "; cin >> a.d;
		return is;
	}
	friend ostream& operator<<(ostream& os, DATHUC3 a) {
		cout << a.a << "x3 + " << a.b << "x2 + " << a.c << "x + " << a.d << endl;
		return os;
	}
	int tinhtong(int x) {
		return a * pow(x, 3) + b * pow(x, 2) + c * x + d;
	}
	int Tong2dathuc(DATHUC3 a, int x) {
		int kq = tinhtong(x);
		kq += a.tinhtong(x);
		return kq;
	}
	
	int Hieu2dathuc(DATHUC3 a, int x) {
		int kq = tinhtong(x);
		kq -= a.tinhtong(x);
		return kq;
	}
};
int main() {
	DATHUC3* a;
	int n = 2;
	a = new DATHUC3[n];
	for (int i = 0; i < n; i++) {
		cout<<"Nhap da thuc thu "<<i+1<<endl;
		cin >> a[i];
	}
	int kq = 0;
	
	int x = 2;
	for (int i = 0; i < n-1; i++) {
		kq+= a[0].Tong2dathuc(a[i + 1], x);
	}
	cout <<"Tong 2 Da Thuc: "<< kq<<endl;
	
	for (int i = 0; i < n-1; i++) {
		kq =a[0].Hieu2dathuc(a[i + 1], x);
	}
	cout << "Hieu 2 Da Thuc: " << kq << endl;
	delete[]a;
	return 0;

}
