#include <iostream>
#include<string.h>
using namespace std;
class anPham 
{
	protected: 
		char ten[30];
		float gia;
		
	public: 
		void nhap()
		{
			cout<<"||Nhap ten an pham: "; 
			fflush(stdin); 
			cin.getline(this->ten,30);
			cout<<"||Nhap gia an pham: "; 
			cin>>this->gia;
		}
		
		void xuat()
		{
			cout<<"||Ten an pham: "<<ten;
			cout<<"\n||Gia an pham: "<<gia;
		}
		char *getten()
		{
			return ten;
		}
};
class Sach:public anPham
{
	protected:
		int st;
	public:
		void nhap()
		{
			anPham::nhap();
			cout<<"||Nhap so trang an pham: "; 
			cin>>st;
			cout<<endl;
		}
		void xuat()
		{
			anPham::xuat();
			cout<<"\n||So trang: "<<st;
			cout<<endl;
		}
		int getst(){
			return st;
		}
};
class DiaCD:public anPham
{
	protected:
		float sp;
	public:
		void nhap()
		{
			anPham::nhap();
			cout<<"||Nhap so phut dia CD: "; 
			cin>>sp;
			cout<<endl;
		}
		
		void xuat()
		{
			anPham::xuat();
			cout<<"\n||So phut DiaCd: "<<sp;
			cout<<endl;
		}
};
int main()
{
	Sach s[30];
	DiaCD cd[30];
	int n;
	cout<<"Nhap so quyen sach:  "; 
	cin>>n;
	cout<<"\n\tNhap thong tin quyen sach";
	for(int i=0; i<n ; i++ )
	{
		cout<<"\n\tSach thu "<<i+1<<" : "<<endl;
		s[i].nhap();
	}
	
	cout<<"\n\t====Sach co >500 trang==== "<<endl;
	for(int i=0; i<n ; i++ )
	{
		if(s[i].getst()>500)
		{
			cout<<"\tSach thu "<<i+1<<endl;
			s[i].xuat();
		}
		cout<<endl;
	}
	
	cout<<"Nhap so dia cd:  ";
	cin>>n;
	cout<<"\n\tNhap thong tin dia cd";
	for(int i=0; i<n ; i++ )
	{
		cout<<"\n\tDiaCD thu "<<i+1<<" : "<<endl;
		cd[i].nhap();
	}
	
	DiaCD k;
	cout<<"\nNhap ten dia can tim:";
	cin>>k.getten();
	for(int i=0; i<n ; i++ )
	{
		if(strcmpi(k.getten(),cd[i].getten())==0)
		{
			cout<<"\n\tDiaCD thu "<<i+1<<" : "<<endl;
			cd[i].xuat();
		}
	}
	cout<<endl;
	return 0;
}
