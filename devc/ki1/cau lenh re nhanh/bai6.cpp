#include<iostream.h>
using namespace std;
int main (){
	float a,b,c,d;
	cout<< "\nNhap diem toan: ";
	cin>> a;
	cout<< "\nNhap diem ly: ";
	cin>> b;
	cout<< "\nNhap diem hoa: ";
	cin>> c;
	d=(a+b+c)/3;
	cout<< "\nDiem trung binh = "<<d<<endl;
	if(d>=9){
		cout<<"\nXep loai xuat xac "<<endl;
	}
	else if(d>=8 & d<9){
		cout<< "\nXep loai gioi "<<endl;
	}
	else if(d>=6.5 & d<8){
		cout<< "\nXep loai kha "<<endl;
	}
	else if( d>=5 & d<6.5){
		cout<< "\nXep loai trung binh"<<endl;
	}

		else if(d<5){
		cout<< "\nXep loai yeu"<<endl;
	}
	return 0;
}