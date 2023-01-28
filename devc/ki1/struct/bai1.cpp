#include <iostream.h>
#include <iomanip.h>
#include <conio.h>
struct nhanvien{
	char manv[15],tennv[30];
	double hesoluong;
	double luongCB;
	double phucap;
	float tongluong;
	
};

void nhapds(nhanvien a[], int n){
	for (int i=0;i<n;i++)
	{  
		cout<<"\n\n--Nhap nhan vien thu:"<<i+1<<endl;
		cin.ignore();
		cout<<"--Nhap ma nhan vien:";cin.getline(a[i].manv,15);
		cout<<"\n--Nhap ten nhan vien:";cin.getline(a[i].tennv,30);
		cout<<"\n--Nhap he so luong:";cin>>a[i].hesoluong;
		
		
	}
}


void tinhtoan(nhanvien a[], int n){
	for(int i=0 ; i<n ;i++){
		a[i].luongCB = a[i].hesoluong * 27500;
		a[i].phucap = a[i].luongCB / 4;
		a[i].tongluong = a[i].luongCB + a[i].phucap;
	}
	
}
void tieude()
{
	cout<<setw(10)<<"MA NV"
	    <<setw(31)<<"TEN NV"
	    <<setw(20)<<"HE SO LUONG"
	    <<setw(20)<<"LUONG CB"
	    <<setw(20)<<"PHU CAP"
	    <<setw(20)<<"TONG lUONG"<<endl;
}
void xuat (nhanvien a[], int n)
{
		tieude();
	    for(int i=0; i<n ;i++)
	{
	 cout<<setw(10)<<a[i].manv
	         <<setw(31)<<a[i].tennv
	         <<setw(20)<<a[i].hesoluong
             <<setw(20)<<a[i].luongCB
	         <<setw(20)<<a[i].phucap
	         <<setw(20)<<a[i].tongluong<<endl;
	}
		
  		
}
	
	

						

int main(){
 	nhanvien  a[100];
 	int n;
 	cout<<"nhap so nhan vien:";cin>>n;
 	nhapds(a,n);
 	tinhtoan(a,n);
 	xuat(a,n);
 	cout<<endl;
 	return 0;
 }