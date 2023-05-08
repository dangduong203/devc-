#include <iostream>
using namespace std;
class dathuc3
{
	private:
		int a, b, c, d;
	protected:

	public:
		dathuc3()
		{
		}
		friend istream &operator >> (istream &is, dathuc3 &k)
		{
			cout<<"\nNhap he so bac 0: ";
			is>>k.d;
			cout<<"\nNhap he so bac 1: ";
			is>>k.c;
			cout<<"\nNhap he so bac 2: ";
			is>>k.b;
			cout<<"\nNhap he so bac 3: ";
			is>>k.a;
			return is;
		}
		friend ostream &operator << (ostream &os, dathuc3 &k)
		{
			os<<k.a<<"x^3+ "<<k.b<<"x^2+ "<<k.c<<"x+ "<<k.d;
			return os;
		}
		friend dathuc3 operator + (dathuc3 x, dathuc3 y)
		{
			dathuc3 kq;
			kq.a = y.a + x.a;
			kq.b = y.b + x.b;
			kq.c = y.c + x.c;
			kq.d = y.d + x.d;
			return kq;
		}
		friend dathuc3 operator - (dathuc3 x, dathuc3 y)
		{
			dathuc3 kq;
			kq.a = y.a - x.a;
			kq.b = y.b - x.b;
			kq.c = y.c - x.c;
			kq.d = y.d - x.d;
			return kq;
		}
		~dathuc3()
		{
		}
};
int main(int argc, char *argv[])
{
	dathuc3 a,b,kq;
	cin>>a;
	cout<<endl;
	cin>>b;
	cout<<endl;
	cout<<a;
	cout<<endl;
	cout<<b;
	cout<<endl;
	cout <<"\nTong hai da thuc la: ";
	kq = a+b;
	cout<<kq;
	cout <<"\nHieu hai da thuc la: ";
	kq = a-b;
	cout<<kq;
	return 0;
}
