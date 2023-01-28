#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class sinhvien{
	public:
		char hoten[30];
		char mssv[8];
		float dtb;
	
		friend void operator>>(sinhvien &sv,istream &is);
		friend void operator<<(sinhvien &sv,ostream &os);	
};
void operator>>(sinhvien &sv,istream &is){ 
	cout<<"Nhap ho ten :";
	is.getline(sv.hoten,30);
	cout<<"Nhap ma sinh vien :";
	is.getline(sv.mssv,8);
	cout<<"Nhap diem tb :";
	is>>sv.dtb;	
}
void operator<<(sinhvien &sv,ostream &os){
	os<<"\nHo ten : "<<sv.hoten
	  <<"\nMssv : "<<sv.mssv
	  <<"\nDTB :"<<sv.dtb;
}
int main(){
	system("cls");
	sinhvien a;
	a>>cin;
	a<<cout;
	getch();
}
