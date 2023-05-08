#include<iostream>
using namespace std;
class HCN
{
	private:
		float d, r;
	public:
		HCN(float d=0, float r=0)
		{
			this -> d =d;
			this -> r =r;
		}
		void Nhap()
		{
			cout <<"\nNhap chieu dai: ";
			cin >> d;
			cout <<"\nNhap chieu rong: ";
			cin >> r;
		}
		float ChuVi()
		{
			return 2*(d+r);
		}
		float DienTich()
		{
			return d*r;
		}
		void xuat()
		{
			cout << "\nIn thong tin chieu dai,rong :"<<"("<<d<<","<<r<<")"<<endl;
			cout << "\nChu vi la: "<<ChuVi();
			cout << "\nDien tich la:"<<DienTich();
		}
		
};
int main()
{
	int n;
	cout <<"\nNhap so hinh chu nhat: ";
	cin >> n;
	HCN *a = new HCN[n];
	for(int i=0; i<n; i++)
	{
		cout <<"\nHiinh chu nhat thu: "<<i+1<<endl;
		a[i].Nhap();
	}
	for(int i=0; i<n; i++)
	{
		cout <<"\nThong tin hinh chu nhat: "<<i+1<<endl;
		a[i].xuat();
	}
	float CVMAX = a[0].ChuVi();
	int chisocv =0;
	for(int i=0; i<n; i++)
	{
		if(CVMAX < a[i].ChuVi())
		{
			CVMAX = a[i].ChuVi();
			chisocv =i;
		}
	}
	cout <<"\nHinh chu nhat co chu vi lon nhat: "<<CVMAX<<endl;
	float DTMIN = a[0].DienTich();
	int chisodt =0;
	for(int i=0; i<n; i++ )
	{
		if(DTMIN > a[i].DienTich())
		{
			DTMIN = a[i].DienTich();
			chisodt =i;
		}
	
	}
	cout <<"\nHinh chu nhat co dien tich nho nhat: "<<DTMIN << endl;
	
}