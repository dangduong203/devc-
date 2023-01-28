#include<iostream.h>

int UCLN(int x,int y)
{   if(x==0||y==0)
		return x+y;
	while(x!=y)
	{
		if(x>y)
		{
			x=x-y;   	
		}
		else
		{
			y=y-x;
		}
	}return y;
}
int main()
{
	int a,b,c,d;
	cout<<"nhap so a: "; 
	cin>>a;
	cout<<"nhap so b: "; 
	cin>>b;
	cout<<"nhap so c: "; 
	cin>>c;
	cout<<"nhap so d: "; 
	cin>>d;
	cout<<"UCLN("<<a<<";"<<b<<";"<<c<<";"<<d<<")= "<<UCLN(UCLN(a,b),UCLN(c,d))<<endl;
	return 0;
}	