#include<iostream>
#include<string.h>
using namespace std;
class HocSinh {
public:
	char MS[7];
	char HT[30];
	char qQ[30];
	float td;

	void nhap() {
		cin.ignore();
		cout << "\nNhap ma hoc sinh: "; cin.getline(MS, 7);
		cout << "Nhap ho ten: "; cin.getline(HT, 30);
		cout << "Nhap Que Quan: "; cin.getline(qQ, 30);
		cout << "Nhap tong diem: "; cin >> td;
	}
	void Xuat() {
		cout << "\nMa Hoc Sinh: " << MS;
		cout << "\nHo Ten; " << HT
			<< "\nQue Quan: " << qQ
			<< "\nTong Diem: " << td<<endl;

	}
	
};
int main() {
	int n;
	HocSinh* a;
	cout << "Nhap so luong Hoc Sinh: "; cin >> n;
	a = new HocSinh[n];
	for (int i = 0; i < n; i++) {
		a[i].nhap();
	}
cout<<"danh sach sau khi sap xep la\n";
for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i].td < a[j].td) swap(a[i], a[j]);
		}
		
	}
for (int i = 0; i < n; i++) {
	
		a[i].Xuat();

}

cout<<"nhung ban nam dinh la ";
for (int i = 0; i < n; i++) {
	if (strcmp(a[i].qQ, "Nam Dinh") == 0) {
		a[i].Xuat();
	}
}
return 0;
}
