#include<iostream.h>
#include<math.h>
int main(){
	int a,b,c,p;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
	cin>>c;
	p=(float)a+b+c/(float)2;
	int s = sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich tam giac la:"<<s<<endl;
	return 0;
}