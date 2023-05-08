#include <iostream>
#include<string.h>
using namespace std;
class BenhNhan
{
	private:
		char ht[30], qq[30];
		int ns;
	public:
		BenhNhan(char *ht="", char *qq="", int ns = 0)
		{
			strcpy(this->ht,ht);
			strcpy(this->qq,qq);
			this->ns=ns;
		}
		
		void nhap()
		{
			cout<<"||Nhap ho ten: "; 
			fflush(stdin); 
			cin.getline(this->ht,30);
			cout<<"||Nhap que quan: "; 
			fflush(stdin); 
			cin.getline(this->qq,30);
			cout<<"||Nhap nam sinh: "; 
			cin>>ns;
		}
		
		void in()
		{
			cout<<"\n||Ten: "<<ht;
			cout<<"\n||Que: "<<qq;
			cout<<"\n||Nam sinh: "<<ns;
			cout<<endl;
		}
		
		int getns()
		{
			return ns;
		}
};

class BenhAn:public BenhNhan
{
	protected:
		char tba[30];
		double tvp;
	public:
		void nhap()
		{
			BenhNhan::nhap();
			cout<<"||Nhap ten benh an: "; 
			fflush(stdin); 
			cin.getline(this->tba,30);
			cout<<"||Nhap tien vien phi: "; 
			cin>>this->tvp;
			cout<<endl;
		}
		
		void xuat()
		{
			BenhNhan::in();
			cout<<"||Ten benh an: "<<tba;
			cout<<"\n||Tien vien phi: "<<tvp;
			cout<<"\n||Tuoi: "<<tuoi();
			cout<<endl;
		}	
		
		int tuoi()
		{
			return 2023 - getns();
		}
		
		double getVienPhi()
		{
			return tvp;
		}
};

int main()
{
	int n;
	cout<<"Nhap so benh an : "; 
	cin>>n;
	BenhAn a[n];
	cout<<"\t====NHAP DS BENH AN===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		cout <<"\nBenh nhan thu: "<<i+1<<endl;
		a[i].nhap();
	}
	cout<<"\t====DS BENH AN VUA NHAP===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		a[i].xuat();
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[j].tuoi()>a[i].tuoi()){
				swap(a[i],a[j]);
			}
		}
	}
	cout<<"\t====DS KHI SAU SX LA===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		a[i].xuat();
	}	
	cout<<"\t====DS BENH NHAN TUOI >50===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		if(a[i].tuoi()>50)
		{
			a[i].xuat();
		}
	}
	cout<<"\t====BENH NHAN CO VIEN PHI CAO NHAT===="<<endl;
	int max = a[0].getVienPhi();
	for(int i = 0; i < n; i++)
	{
		if(max < a[i].getVienPhi())
		{
			max = a[i].getVienPhi();
			a[i].xuat();
		}
		
	} 
	return 0;
}
