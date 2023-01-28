#include<iostream>
using namespace std;
class sinhvien{
	int masv;
	string ten;
	int tuoi;
	public:
		void nhap(){
		cout<<"nhap ma sv:";
		cin>>this->masv;
		cout<<"nhap ten sv:";
		cin>>this->ten;
		cout<<"nhap tuoi sv:";
		cin>>this->tuoi;
	}
	    void xuat(){
	    	cout<<"\nma sv :"<<this->masv;
	    	cout<<"\nten sv:"<<this->ten;                     
	    	cout<<"\ntuoi sv:"<<this->tuoi<<endl;
		}
};
int main(){
	int n;
	cout<<"nhap n:";
	cin>>n;
	sinhvien a[n];
	for(int i=0;i<n;i++){
		cout<<"\nNhap sinh vien thu "<< i+1 <<"\n";
	a[i].nhap();
}
	cout<<"\nDS sinh vien sau khi xuat la:";
	for(int i=0;i<n;i++){
		cout<<"\nsinh vien thu "<< i+1 <<"la:";
		a[i].xuat();
	}
	
	
}
