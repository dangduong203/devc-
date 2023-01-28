#include<iostream>
using namespace std;

class Box{
	public:
	int chieucao;
	int chieurong;
	int chieudai;
	int n;
	void nhap(){
		cout<<"Nhap chieu cao:";
		cin>>chieucao;
		cout<<"Nhap chieu rong:";
		cin>>chieurong;
		cout<<"Nhap chieu dai:";
		cin>>chieudai;
		
	}
	float The_tich(){
		return chieudai*chieurong*chieucao;
	}
};

int main(){

//	a.chieucao=7;
//	a.chieurong=6;
//	a.chieudai=5;
//	Box b;
//	b.chieucao=2;
//	b.chieurong=2;
//	b.chieudai=2;

//    a.nhap();
//    b.nhap();
//
//	cout<<"The tich box a la :"<<a.The_tich()<<endl;
//	cout<<"The tich box b la :"<<b.The_tich();
     
     int n;
     cout<<"Nhap n:";
     cin>>n;
     Box a[n];
     for(int i=0;i<n;i++){
     cout<<"Nhap du lieu thu "<<i+1<<endl;
     a[i].nhap();
     cout<<"the tich la:"<<a[i].The_tich()<<"\n"<<endl;
     
	 }
	 cout<<"the tich lon hon 500 la\n";
	 for(int i=0;i<n;i++){
	 	if(a[i].The_tich()>500){
     	cout<<"the tich thu "<< i + 1 << " : " << a[i].The_tich() <<endl;
     	
	 }
 }
}

