#include <iostream>
#include <string.h>
using namespace std;
class MatHang 
{
	protected: 
		char mh[10],th[30];
		double dg;
	public: 
	
		MatHang()
		{
			strcpy(this->mh,"");
			strcpy(this->th,"");
			this -> dg =0;
		}
		
		MatHang(char *mh, char *th, double dg)
		{
			strcpy(this->mh,mh);
			strcpy(this->th,mh);
			this->dg=dg;
		}
		
		~MatHang()
		{
			
		}
		
		friend istream & operator >> (istream &is, MatHang &mh)
		{
			cout<<"\n||Nhap ma hang: "; 
			fflush(stdin); 
			is.getline(mh.mh,10);
			cout<<"\n||Nhap ten hang: "; 
			fflush(stdin); 
			is.getline(mh.th,30);
			cout<<"\n||Nhap don gia: "; 
			is>>mh.dg;
			return is;
		}
		
		friend ostream & operator << (ostream &os, MatHang &mh)
		{
			cout<<"\n||Ma hang: "<<mh.mh;
			cout<<"\n||Ten hang: "<<mh.th;
			cout<<"\n||Don Gia: "<<mh.dg;
			return os;
		}
		
		char *getmh()
		{
			return mh;
		}
		double getdg()
		{
			return dg;
		}
};

class BanhKeo:public MatHang
{
	protected:
		char nsx[30];
	public:
	
		BanhKeo()
		{
			strcpy(this->nsx,"");
		}
		BanhKeo(char *mh, char *th, double dg, char *nsx): MatHang(mh,th,dg)
		{
			strcpy(this->nsx,nsx);
		}
		~BanhKeo()
		{
			
		}
		float chietkhau()
		{
			return getdg()*0.01;
		}
		friend istream & operator >> (istream &is, BanhKeo &bk)
		{
			is>>(MatHang&)bk;
			cout<<"\n||Nhap noi san xuat: "; 
			fflush(stdin); is.getline(x.nsx,30);
			return is;
		}
		
		friend ostream & operator << (ostream &os, BanhKeo &bk)
		{
			os<<(MatHang&)bk;
			cout<<"\n||Noi san xuat: "<<x.nsx;
			cout<<"\n||Chiet khau: "<<x.chietkhau()<<endl;
			return os;
		}
		
};
int main()
{
	int n;
	cout<<"Nhap so doi tuong banh keo : "; 
	cin>>n;
	BanhKeo *a = new BanhKeo[n];
	cout<<"\t====NHAP TT BANH KEO===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		cout<<"\n\tNhap thong tin banh keo thu a["<<i+1<<"] : ";
		cin>>a[i];
	}
	
	cout<<"\n\t====DS TT BANH KEO DA NHAP===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		cout<<a[i];
	}
	
	cout<<"\n\t====DS BANH KEO CO MA HANG KHAC M01===="<<endl;
	for(int i=0; i<n ; i++ )
	{
		if(strcmpi(a[i].getmh(),"m01")!=0)
		{
			cout<<a[i];
		}
	}
	cout<<endl;
	return 0;
}
