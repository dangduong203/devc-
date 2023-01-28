#include <iostream.h>
#include <iomanip.h>
struct nhanvien
{
     char manv[10];
     char tennv[30]; 
     float luong;
     float phucap;
     long long double tongluong;
};

void nhap(nhanvien a[],int n)
{
	for(int i=0; i<n ;i++)
	{
	cout<<"\tNhap nhan vien thu "<< i+1 <<endl;
	cin.ignore();
	cout<<"Ma nhan vien:";
	cin.getline(a[i].manv,10);
	cout<<"Ten nhan vien :";
	cin.getline(a[i].tennv,30);
	cout<<"Luong nhan vien :";
	cin>>a[i].luong;
	
	}
}
void tieude()
{
	
	cout<<setw(10)<<"MA NHAN VIEN";
	cout<<setw(30)<<"TEN NHAN VIEN";
 	cout<<setw(20)<<"LUONG";
	cout<<setw(20)<<"PHU CAP";
	cout<<setw(20)<<"TONG LUONG"<<endl;
}

void tinhphucap(nhanvien a[],int n)
{
	for(int i=0; i<n ; i++)
	a[i].phucap = 0.25 * a[i].luong;	
}

void tinhtongluong(nhanvien a[],int n)
{
	for(int i=0; i<n ; i++)
	a[i].tongluong = a[i].luong * a[i].phucap;
}

void xuat(nhanvien a[],int n)
{
	
	tieude();
	for(int i=0 ; i<n ; i++)
	{
		cout<<setw(12)<<a[i].manv;
		cout<<setw(30)<<a[i].tennv;
		cout<<setw(20)<<a[i].luong;
		cout<<setw(20)<<a[i].phucap;
        cout<<setw(20)<<a[i].tongluong<<endl;
		    
	}
}
void sapxep(nhanvien a[],int n)
{   
    tieude();
	for(int i=0;i<n;i++)
	for(int j=i;j<n;j++)
	if(a[i].tongluong < a[j].tongluong)
	{
	     cout<<setw(12)<<a[0].manv;
		cout<<setw(30)<<a[0].tennv;
		cout<<setw(20)<<a[0].luong;
		cout<<setw(20)<<a[0].phucap;
        cout<<setw(20)<<a[0].tongluong<<endl;
	}
}
int main()
{
	int n;
	nhanvien a[100];
	cout<<"Nhap so nhan vien :";
	cin>>n;
	nhap(a,n);
	tinhphucap(a,n);
	tinhtongluong(a,n);
	cout<<"\t\t\t---DANH SACH NHAN VIEN---"<<endl;
	xuat(a,n);
	cout<<"\t\t\t---DANH SACH NV SAU KHI SAP XEP LA---"<<endl;
	sapxep(a,n);
	
}










