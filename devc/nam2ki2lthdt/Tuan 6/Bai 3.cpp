#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
class SHAPE
{
	public:
	    virtual void nhap()=0;
	    virtual void xuat()=0;
	    virtual float dtich()=0;
	    virtual float chuvi()=0;
    	friend float sumdt();
	    friend float sumcv();
};
class ROUND:public SHAPE 
{
	private:
	    float r;
	public:
	void nhap()
	{
		cout<<"Nhap ban kinh: ";
		cin>>r;
	}
	void xuat()
	{
		cout<<"Hinh tron co ban kinh la: "<<r<<endl;
	    cout<<"Chu vi: "<<chuvi()<<endl;
		cout<<"Dien tich: "<<dtich();
	}
	float dtich()
	{
		return 3.14*r*r;
	}
	float chuvi()
	{
		return 2*3.14*r;
	}
};
class TRI:public SHAPE {
	private:
		float a,b,c;
	public:
	void nhap()
	{
		cout<<"Nhap canh a: ";
		cin>>a;
		cout<<"Nhap canh b: ";
		cin>>b;
		cout<<"Nhap canh c: ";
		cin>>c;
	}
	void xuat()
	{
		cout<<"Hinh tam giac co 3 canh la: "<<a<<" "<<b<<" "<<c<<" "<<endl;
	    cout<<"Chu vi: "<<chuvi()<<endl;
		cout<<"Dien tich: "<<dtich();
	}	
	float dtich()
	{
		float p = a+b+c/ 2.0;
        return sqrt(p*(p - a)*(p - b)*(p - c));
	} 
	float chuvi()
	{
		return a+b+c;
	}
};
class REC:public SHAPE {
	private:
		float m,n;
	public:
    
    void nhap()
	{
		cout<<"Nhap chieu dai: ";
		cin>>m;
		cout<<"Nhap chieu rong: ";
		cin>>n;
	}
	void xuat()
	{
		cout<<"Hinh chu nhat co 2 canh la: "<<m<<" "<<n<<endl;
	    cout<<"Chu vi: "<<chuvi()<<endl;
		cout<<"Dien tich: "<<dtich();
	}
	float dtich()
	{
        return m*n;
	} 
	float chuvi()
	{
		return (m+n)*2;
	}
};
void sumdt(SHAPE *a[],int n)
{
	float sum1=0;
	for(int i=0;i<n;i++)
	{
		sum1+=a[i]->dtich(); 
	}
	cout<<"\n\nTong dien tich la: "<<sum1<<endl;
}
void sumcv(SHAPE *a[],int n)
{
	float sum2=0;
	for(int i=0;i<n;i++)
	{
		sum2+=a[i]->chuvi();
	}
	cout<<"Tong chu vi la: "<<sum2<<endl;
}
int main()
{
    SHAPE *s[100];
    int n;
	cout<<"Nhap so luong hinh: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"1.Nhap hinh tron"<<endl;
		cout<<"2.Nhap hcn"<<endl;
		cout<<"3.NHap tam giac"<<endl;
		cout<<"4.Exit"<<endl;
		int c;
	cout<<"\n => Moi Nhap lua chon: ";cin>>c;
		if(c==1)
		{
			s[i]=new ROUND();
		}
		else if(c==2)
		{
			s[i]=new REC();
		}
		else if(c==3)
		{
			s[i]=new TRI();
		}
		s[i]->nhap();
	}
   for(int i=0;i<n;i++)
		{
		cout<<"\n Hinh thu: "<<i+1<<endl;
		s[i]->xuat();
		cout<<endl;
		}
	sumdt(s,n);
	sumcv(s,n);	
}



