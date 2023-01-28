#include<iostream.h>
#include<iomanip.h>
using namespace std;

struct hocsinh
{
	char ma_hs[8];
	char ten_hs[30];
	char gioitinh[5];
	float toan, ly, hoa,dtb;
	char Xeploai[10];
	
};

void nhap(hocsinh hs[] , int n )
	{
	for(int i=0 ; i<n ;i++)
	{
		cout<<"\nhoc sinh thu "<< i+1 <<": \n";
		cin.ignore();
		cout<<"\n\tNhap ma hoc sinh:";
		cin.getline(hs[i].ma_hs,8);
		cout<<"\n\tNhap ten hoc sinh:";
		cin.getline(hs[i].ten_hs,30);
		cout<<"\n\tNhap gioi tinh:";
		cin.getline(hs[i].gioitinh,5);
		cout<<"\n\tNhap diem toan:";
		cin>>hs[i].toan;
		cout<<"\n\tNhap diem ly:";
		cin>>hs[i].ly;
		cout<<"\n\tNhap diem hoa:";
		cin>>hs[i].hoa;
	}
}

void diem_tb(hocsinh hs[] , int n)
{
	for(int i=0; i<n ; i++)
	{
		hs[i].dtb= (hs[i].toan*4 + hs[i].ly*3 + hs[i].hoa*2)/9;
	}
}

float xep_loai(hocsinh hs[],int n)
{
	for(int i=0; i<n ; i++)
	{
		if(hs[i].dtb >= 9)
		{
			strcpy(hs[i].Xeploai,"Xuat Sac");
		}
		else if(hs[i].dtb >= 8)
		{
			strcpy(hs[i].Xeploai,"Gioi");
		}
		else if(hs[i].dtb >= 6.5)
		{
			strcpy(hs[i].Xeploai,"Kha");
		}
		else if (hs[i].dtb >= 5)
		{
			strcpy(hs[i].Xeploai,"Trung binh");
		}
		else
		{
			strcpy(hs[i].Xeploai,"Yeu");
		}	
	}
}

void tieude()
{
	cout<<setw(10)<<"MA HS"
	    <<setw(31)<<"TEN HS"
	    <<setw(20)<<"GIOI TINH"
	    <<setw(20)<<"DIEM TOAN"
	    <<setw(20)<<"DIEM LY"
	    <<setw(20)<<"DIEM HOA"
	    <<setw(20)<<"DIEM TRUNG BINH"
	    <<setw(20)<<"XEP LOAI"<<endl;
}

void xuat(hocsinh hs[] , int n)
{
	tieude();
	for(int i=0; i<n ;i++)
	{
		cout<<setw(10)<<hs[i].ma_hs
		    <<setw(31)<<hs[i].ten_hs
		    <<setw(20)<<hs[i].gioitinh
		    <<setw(20)<<hs[i].toan
		    <<setw(20)<<hs[i].ly
		    <<setw(20)<<hs[i].hoa
		    <<setw(20)<<hs[i].dtb
		    <<setw(20)<<hs[i].Xeploai<<endl;
   			
	}
	
	
}

void nusx_gioi(hocsinh hs[],int n)
{
	tieude();
	for(int i=0; i<n ; i++)
	{
		if(hs[i].gioitinh == "nu" && hs[i].dtb >=9 || hs[i].dtb >=8)
		{
			cout<<setw(10)<<hs[i].ma_hs
		    <<setw(31)<<hs[i].ten_hs
		    <<setw(20)<<hs[i].gioitinh
		    <<setw(20)<<hs[i].toan
		    <<setw(20)<<hs[i].ly
		    <<setw(20)<<hs[i].hoa
		    <<setw(20)<<hs[i].dtb
		    <<setw(20)<<hs[i].Xeploai<<endl;
		}
	}
}

int main(){
	int n;
	cout<<"Nhap so luong hoc sinh:";
	cin>>n;
	hocsinh hs[n];
	cout<<"Nhap cac thong tin cua hoc sinh:";
	nhap(hs,n);
	diem_tb(hs,n);
	xep_loai(hs,n);
	cout<<"Cac thong tin vua nhap la:\n";
	xuat(hs,n);
	cout<<"Danh sach hoc sinh nu xuat xac va gioi:\n";
	nusx_gioi(hs,n);
}