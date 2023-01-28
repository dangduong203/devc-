#include <iostream>
using namespace std;
int main () {
	float a, b, c, d, x, y, z, i;
	int menu;
	cout << "Chon 1: de tinh dien tich hinh vuong" << endl;
	cout << "Chon 2: de tinh dien tich hinh chu nhat" << endl;
	cout << "Chon 3: de tinh dien tich hinh thang" << endl;
	cout << "Chon 4: de tinh dien tich hinh binh hanh" << endl;
	cout << "Nhap vao lua chon cua ban:" ;
	cin >> menu;
	switch (menu){
		case 1:
			cout << "Nhap vao canh cua hinh vuong: ";
			cin >> a;
			cout << "dien tich hinh vuong la: " << a*a << endl;
			break;
		case 2:
			cout << "nhap vao chieu dai: ";
			cin >> b;
			cout << "Nhap vao chieu rong: ";
			cin >> c;
			cout << "dien tich hinh chu nhat la: " << b * c << endl;
			break;
		case 3:
			cout << "Nhap vao day lon: ";
			cin >> d;
			cout << "Nhap vao day nho: ";
			cin >> x;
			cout << "Nhap vao chieu cao: ";
			cin >> y;
			cout << "Dien tich hinh thang la: " << ((d + x) * y) / 2 << endl;
			break;
		case 4:
			cout << "Nhap do dai day : ";
			cin >> z;
			cout << "Nhap chieu cao : ";
			cin >> i;
			cout << "Dien tich hinh binh hanh la: " << z * i << endl;
			break;
		default :
			cout << "Vui long nhap lai" << endl;
	}
}
