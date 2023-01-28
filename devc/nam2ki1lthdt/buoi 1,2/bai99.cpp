#include <iostream>
#include<string.h>
using namespace std;
class HH{
	public:
		char Mh[8];
		char Th[30];
		int Sl;
		float Dg;
		float Tt;
		void Nhap(){
			cin.ignore();
			cout << "Nhap ma hang: ";
			cin.getline(Mh, 8);
			cout << "Nhap ten hang: ";
			cin.getline(Th, 30);
			cout << "Nhap vao so luong: ";
			cin >> Sl;
			cout << "Nhap vao don gia: ";
			cin >> Dg;
			cout << "\n";
		}
		int Tien(){
			Tt = Sl * Dg;
			return Tt;
		}
		void Xuat(){
			cout << "BANG DON HANG \n";
			cout << "Ma hang: " << Mh << endl;
			cout << "Ten hang: " << Th << endl;
			cout << "So luong: " << Sl << endl;
			cout << "Don gia: " << Dg << endl;
			cout << "Thanh tien: " << Tt << endl;
			cout << "\n";
		} 
		
};
int main() {
	int n;
	cout << "Nhap vao so luong hang hoa: ";
	cin >> n;
	HH x[n];
	for (int i = 0; i < n; i++){
		x[i].Nhap();
	}
	for (int i = 0; i < n; i++){
		x[i].Tien();
		x[i].Xuat();
	}
	for(int i = 0; i < n; i++){
		if(x[i].Dg > 50){
			x[i].Tien();
			x[i].Xuat();
		}
	}
	
}
