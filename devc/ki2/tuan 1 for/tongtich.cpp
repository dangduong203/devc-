#include<iostream.h>

int main(){
	int a , b , tong , tich , thuong, hieu ;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	tong = a+b; 
	cout<<"Tong cua 2 so la:"<<tong<<endl;
    tich = a*b;
	cout<<"Tich cua 2 so la:"<<tich<<endl;
	if(b==0){
		cout<<"Khong thuc hien duoc"<<endl;
	}
    else{
    	thuong =a/b;
	cout<<"Thuong cua 2 so la:"<<thuong<<endl;
    }
	hieu = a-b;
	cout<<"Hieu cua 2 so la:"<<hieu<<endl;
	
	return 0;
	
}