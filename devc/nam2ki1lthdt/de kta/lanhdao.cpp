#include<iostream>
#include<string.h>
using namespace std;
class nguoild{
	public:
	    char ma[20];
	    char hoten[30];
	    char chucvu[20];
	    float hsl;
	    nguoild() {};
		nguoild(char* ma,char* hoten,char* chucvu,float hsl){
			strcpy(this->ma, ma);
			strcpy(this->hoten, hoten);
			strcpy(this->chucvu, chucvu);
			this->hsl=hsl;
		}    
	    ~nguoild() {};
		void nhap(){
			cin.ignore();
			cout<<"Nhap ma  : ";
			cin.getline(ma,20);
			cout<<"Nhap ten  : ";
			cin.getline(hoten,30);
			cout<<"Nhap chuc vu  : ";
			cin.getline(chucvu,20);
			cout<<"Nhap he so luong : ";
			cin>>hsl;
			cout<<endl;
		}  
		void xuat(){
			cout<<"\nMa  : "<<ma;
			cout<<"\nTen  : "<<hoten;
			cout<<"\nChuc vu  : "<<chucvu;
			cout<<"\nHe so luong : "<<hsl<<endl;
		}  
	
};
class lanhdao : public nguoild{
	public:
		int snct;
	    lanhdao() {};
		lanhdao(int snct,char* manv,char* hoten,char* chucvu,float hsl)	: nguoild(ma,hoten,chucvu,hsl){
			this->snct=snct;
		}
	~lanhdao(){}
	friend istream& operator >>(istream& is, lanhdao &ld)
		{
			ld.nhap();
			cout<<"Nhap so nam cong tac: ";
			is>>ld.snct;
			return is;
		}	
		float phucap(){
			if(strcmp(strlen(chucvu,"GD"))==0)
			return 500;
			if(strcmp(strlen(chucvu,"TP"))==0)
			return 300;
			else
			return 200;
		}
	friend ostream& operator <<(ostream& os,lanhdao ld) 	
	{
		ld.xuat();
		os<<"\nSo nam cong tac:"<<ld.snct
		  <<"\nLuong phu cap : "<<ld.phucap()<<endl;
		  return os;
	}
};
int main(){
	int n;
	cout<<"Nhap so nguoi lao dong : ";
	cin>>n;
	nguoild a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Nhap thong tin nguoi lao dong thu "<<i+1<<endl;
		a[i].nhap();
	}
	for(int i=0;i<n;i++)
	{
		cout<<"\nThong tin nguoi lao dong thu "<<i+1<<" la ";
		a[i].xuat();
	}
	cout<<endl;
	int m;
	cout<<"\nNhap so luong lanh dao : ";
	cin>>m;
	lanhdao b[m];
	for(int i=0;i<m;i++)
	{
		cout<<"Nhap thong tin nguoi lanh dao thu "<<i+1<<"\n"<<endl;
	    cin>>b[i];
	}
	for(int i=0;i<m;i++)
	{ 
	    cout<<"Thong tin nguoi lanh dao thu "<<i+1<<"la"<<endl;
		cout<<b[i];
	}
	cout<<"\n-----------Sap xep tang dan theo so nam cong tac----------- "<<endl;
	for(int i=0;i<m;i++)
	{
		for(int j=i+1;j<m;j++)
		{
			if(b[i].snct>b[j].snct)
			{
				lanhdao tg=b[i];
				b[i]=b[j];
				b[j]=tg;
			}
		}
		
	}
	for(int i=0;i<m;i++){
		cout<<"\nthong tin lanh dao thu "<<i+1<<" la "<<endl;
		cout<<b[i];
	}
}
