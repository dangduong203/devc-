#include<bits/stdc++.h>
using namespace std;

class SV{
	protected:
		string maSv;
		string hoTen;
		string sex;
	public:
		SV();
		~SV();
		friend istream &operator >> (istream &in, SV &sv);
		friend ostream &operator << (ostream &out, SV sv);
		string getSex(){
			return sex;
		}
		
		string getHoten(){
			return hoTen;
		}
};

SV :: SV(){
	maSv = " ";
	hoTen = " ";
	sex = " ";
}

SV :: ~SV(){
	
}

istream &operator >> (istream &in, SV &sv){
	fflush(stdin);
	cout << "Nhap ma sinh vien: ";
	getline(in, sv.maSv);
	cout << "Nhap ho va ten: ";
	getline(in, sv.hoTen);
	cout << "Nhap gioi tinh: ";
	getline(in, sv.sex);
	return in;
}

ostream &operator << (ostream &out, SV sv){
	out << "|" << setw(15) << sv.maSv;
	out << "|" << setw(15) << sv.hoTen;
	out << "|" << setw(15) << sv.sex;
	return out;
}

class Subject{
	protected:
		string maMon;
		string tenMon;
	public:
		Subject();
		~Subject();
		 friend istream &operator >>  (istream &in, Subject &s);
		 friend ostream &operator << (ostream &out, Subject s);
		 
		 string getTenmon(){
		 	return tenMon;
		 }
		
};

Subject :: Subject(){
	maMon = " ";
	tenMon = " ";
}

Subject :: ~Subject(){
	
}

istream &operator >> (istream &in, Subject &s){
	fflush(stdin);
	cout << "Nhap ma mon: ";
	getline(in, s.maMon);
	cout << "Nhap ten mon: ";
	getline(in, s.tenMon);
	return in;
}

ostream &operator << (ostream &out, Subject s){
	out << "|" << setw(15) << s.maMon;
	out << "|" << setw(15) << s.tenMon;
	return out;
}

class Point : public SV, public Subject{
	private:
		float diemThi;
	public:
		Point();
		~Point();
		friend istream &operator >> (istream &in, Point &p);
		friend ostream &operator << (ostream &out, Point p);
		float getDiemthi(){
			return diemThi;
		}
};

Point :: Point(){
	diemThi = 0.0;
}

Point :: ~Point(){
	
}

istream &operator >> (istream &in, Point &p){
	in >> (SV &) p;
	in >> (Subject &) p;
	cout << "Nhap diem thi: ";
	cin >> p.diemThi;
	return in;
}

ostream &operator << (ostream &out, Point p){
	out << (SV &) p;
	out << (Subject &) p;
	out << "|" << setw(15) << p.diemThi;
	
	return out;
}

void Nhap(Point a[], int n){
	for(int i = 0; i < n; i++){
		cin >> a[i];
		cout << endl;
	}
}

void Xuat(Point a[], int n){
	for(int i = 0; i < n; i++){
		cout << a[i] << endl;
	}
}

void lietKe(Point a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i].getSex() == "nam"){
			cout << a[i] << endl;
		}
	}
}

void TBC(Point a[], int n){
	float tong;
	float dem;
	float tb;
	for(int i = 0; i < n; i++){
		if(a[i].getDiemthi() >= 0){
			tong = tong + a[i].getDiemthi();
			dem++;
		}
		tb = tong/dem;
	}
	cout << "Diem trung binh cac mon hoc la: " << tb << endl;
}

void timKiem(Point a[], int n){
	string x;
	fflush(stdin);
	cout << "Nhap ten sinh vien can tim: ";
	getline(cin, x);
	cout << "|" << setw(15) << "Ma Sinh Vien";
	cout << "|" << setw(15) << "Ho Va Ten";
	cout << "|" << setw(15) << "Gioi Tinh";
	cout << "|" << setw(15) << "Ma Mon";
	cout << "|" << setw(15) << "Ten Mon";
	cout << "|" << setw(15) << "Diem Thi";
	cout << endl;
	for(int i = 0; i < n; i++){
		if(a[i].getHoten() == x){
			cout << a[i] << endl;
		}
	}
	
}

void timKiem1(Point a[], int n){
	float min = a[0].getDiemthi();
	for(int i = 0; i < n; i++){
		if(a[i].getTenmon() == "toan" and min > a[i].getDiemthi()){
			min = a[i].getDiemthi();
		}
	}
	cout << "Diem thi mon toan nho nhat la: " << min << endl;
}

void sapXep(Point a[], int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i].getDiemthi() > a[j].getDiemthi()){
				swap(a[i], a[j]);
			}
		}
	}
}

void title(){
	cout << "|" << setw(15) << "Ma Sinh Vien";
	cout << "|" << setw(15) << "Ho Va Ten";
	cout << "|" << setw(15) << "Gioi Tinh";
	cout << "|" << setw(15) << "Ma Mon";
	cout << "|" << setw(15) << "Ten Mon";
	cout << "|" << setw(15) << "Diem Thi";
	cout << endl;
}

int main(){
	int n; 
	cout << "Nhap so luong sinh vien: ";
	cin >> n;
	
	Point a[n];
	Nhap(a, n);
	cout << "\t\t\t\t DANH SACH SINH VIEN DA NHAP \n";
	title();
	Xuat(a, n);
	cout << "\t\t\t DANH SACH SINH VIEN NAM TRONG DANH SACH \n";
	lietKe(a, n);
	TBC(a, n);
	timKiem(a, n);
	timKiem1(a, n);
	cout << "\t\t\t\t DANH SACH SAU KHI SAP XEP \n";
	sapXep(a, n);
	title();
	Xuat(a, n);
	
}
