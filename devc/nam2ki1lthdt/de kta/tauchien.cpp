#include<iostream>
#include<string.h>
using namespace std;
class tau{
	public:
		char hangsx[20];
		int vtoc;
		int namsx;
	tau(){}
	tau(char* hangsx,int vtoc,int namsx){
		strcpy(this->hangsx,hangsx);
		this->vtoc=vtoc;
		this->namsx=namsx;
	}
	~tau(){}
	void nhap(){
		cout<<"Nhap hang sx : ";
		cin.getline(hangsx,20);
		cout<<"Nhap van toc : ";
		cin>>vtoc;
		cout<<"Nhap nam san xuat : ";
		cin>>namsx;
		cout<<endl;
	}
	void xuat(){
		cout<<"\nHang sx : "<<hangsx
		    <<"\nVan toc : "<<vtoc
		    <<"\nNam sx : "<<namsx<<endl;
	}	
};
class tauchien : public tau{
	public:
		char loaitau[20];
		int trongtai;
	tauchien(){}
	    tauchien(char* loaitau,int trongtai,char* hangsx,int vtoc,int namsx): tau(hangsx,vtoc,namsx){
		strcpy(this->loaitau,loaitau);
		this->trongtai=trongtai;
	}
	~tauchien(){}
	friend istream& operator >>(istream& is, tauchien &tc){
		tc.nhap();
		cout<<"Nhap loai tau :";
		is.getline(loaitau,20);
		cout<<"Nhap trong tai :";
		is>>tc.trongtai;
		return is;	
	}
	float tiensuachua(){
		if(namsx<1990){
			return 50000000;
		}
		else if(namsx>1991 && namsx<2000){
			return 30000000;
		}
		else{
			return 10000000;
		}
	}	
	friend ostream& operator <<(ostream& os, tauchien tc){
		tc.xuat();
		os<<"\nLoai tau : "<<tc.loaitau
		  <<"\nTrong tai : "<<tc.trongtai
		  <<"\nTien sua chua : "<<tc.tiensuachua()<<endl;
	} 
};
int main(){
	int n, m;
	cout <<"\nNhap so luong tau: ";
	cin >>n;
	tau a[n];
	for(int i=0; i<n; i++)
	{
		cout <<"\nTau thu: "<< i+1<<endl;
		a[i].nhap();
	}
	for(int i=0; i<n; i++)
	{
		cout <<"\nThong tin tau thu : "<< i+1 <<endl;
		a[i].xuat();
	}
	cout <<"\nNhap so luong tau chien: ";
	cin >> m;
	tauchien b[m];
	for(int i=0; i<m; i++)
	{
		cout <<"\nTau chien thu: "<< i+1<<endl;
		cin >> b[i];
	}
	cout <<"\n---Danh sach tau theo thu tu tang dan---  ";
	for(int i=0; i<m-1; i++)
	{
		for(int j=i+1; j<m; j++)
		{
			if(b[i].trongtai> b[j].trongtai)
			{
				tauchien tg = b[i];
						b[i] = b[j];
						b[j]= tg;
			}
		}
	}
	for(int i=0; i<m; i++)
	{
		cout<<"Thong tin tau thu "<<i+1<<" la :";
		cout << b[i];
	}
}
