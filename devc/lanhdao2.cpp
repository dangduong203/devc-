#include<iostream>
#include<string.h>
using namespace std;
class nguoild{
	public:
		int ma;
		char hoten[20];
		char chucvu[20];
		int hsl;
	nguoild(){}
	nguoild(int ma,char* hoten,char* chucvu,int hsl){
		this->ma=ma;
		strcpy(this->hoten,hoten);
		strcpy(this->chucvu,chucvu);
		this->hsl=hsl;
	}		
	~nguoild(){}
	void nhap(){
		cout<<"-Nhap Ma NV : ";
		cin>>ma;
		cin.ignore();
		cout<<"-Nhap Ho Ten : ";
		cin.getline(hoten,20);
		cout<<"-Nhap Chuc Vu : ";
		cin.getline(chucvu,20);
		cout<<"-Nhap He So Luong : ";
		cin>>hsl;
		cout<<endl;
	}
	void xuat(){
		cout<<"\n-Ma NV : "<<ma
		    <<"\n-Ho Ten : "<<hoten
		    <<"\n-Chuc Vu : "<<chucvu
		    <<"\n-He So Luong : "<<hsl<<endl;
	}
};
class lanhdao : public nguoild{
	public:
		int snct;
	lanhdao(){}
	lanhdao(int snct,int ma,char* hoten,char* chucvu,int hsl) : nguoild(ma,hoten,chucvu,hsl){
		this->snct=snct;
	}
	~lanhdao(){}
	friend istream& operator >> (istream&is, lanhdao& ld){
		ld.nhap();
		cout<<"-Nhap So Nam Cong Tac : ";
		is>>ld.snct;
		return is;
	}
	float phucap(){
		if(strcmp(chucvu,"GD")==0){
			return 500;
	    }
		else if(strcmp(chucvu,"TP")==0){
			return 300;
		}
		else{
			return 200;
		}	
	}	
	friend ostream& operator << (ostream&os, lanhdao ld){
		ld.xuat();
		os<<"\n-So Nam Cong Tac : "<<ld.snct
		  <<"\n-Phu Cap : "<<ld.phucap()<<endl;
	}	
};
int main(){
	int n;
	cout<<"Nhap So Nguoi Lao Dong : ";
	cin>>n;
	nguoild a[n];
	for(int i=0;i<n;i++){
		cout<<"\tNhap Nguoi Lao Dong Thu "<<i+1<<" : "<<endl;
		a[i].nhap();
	}
	for(int i=0;i<n;i++){
		cout<<"\tThong Tin Nguoi Lao Dong Thu "<<i+1<<" : "<<endl;
		a[i].xuat(); 
	}
	int m;
	cout<<"\nNhap So Nguoi Lanh Dao : ";
	cin>>m;
	lanhdao b[m];
	for(int i=0;i<m;i++){
		cout<<"\tNhap Nguoi Lanh Dao Thu "<<i+1<<" : "<<endl;
		cin>>b[i];
	}
	for(int i=0;i<m;i++){
		cout<<"Thong Tin Nguoi Lanh Dao Thu "<<i+1<<" : "<<endl;
		cout<<b[i]; 
	}
	cout<<"\t----DANH SACH LANH DAO THEO THU TU TANG DAN SNCT----"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<m-1;j++){
			if(b[i].snct<b[j].snct){
				lanhdao tg=b[i];
				        b[i]=b[j];
				        b[j]=tg;
			}
		}
	}
	for(int i=0;i<m;i++){
		cout<<"Thong Tin Nguoi Lanh Dao Thu "<<i+1<<" : "<<endl;
		cout<<b[i]; 
	}
}
