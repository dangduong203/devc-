#include<iostream>
#include<string.h>
using namespace std;
class Monhoc{
	protected:
	char Ten[20];
	int st;
	public:
	Monhoc(){
		strcpy(Ten," ");
		st=0;
	}
    Monhoc(char*Ten,int st){
    	strcpy(this->Ten,Ten);
    	this->st=st;
    }

    void Xuat(){
    	cout<<" Mon hoc : "<<Ten<<endl;
    	cout<<" So tiet : "<<st<<endl;
    }
};
 class Nguoi{
 	protected:
 	char Tennguoi[20];
 	int ns;
 	public:
 	Nguoi(){
	 	strcpy(Tennguoi," ");
	 	ns=0;
	 }
	 Nguoi(char*Tennguoi,int ns){
 		strcpy(this->Tennguoi,Tennguoi);
 		this->ns=ns;
 	}
	 void Xuat(){
 		cout<<" Ten nguoi :"<<Tennguoi<<endl;
 		cout<<" Nam sinh : "<<ns<<endl;
 	}
 };
 class Giaovien:public Monhoc,public Nguoi{
 	private:
    char bomon[20];
	public:
	Giaovien(){
		strcpy(bomon," ");
	} 
	Giaovien(char*Tennguoi=" ",int ns=1,char*bomon=" ",int st=1,char*Ten=" " ):Monhoc(Ten,st),Nguoi(Tennguoi,ns){
		strcpy(this->bomon,bomon);
	}	
	void Xuat(){
		Monhoc::Xuat();
		cout<<" Bo mon: "<<bomon<<endl;
		Nguoi::Xuat();
	}
 };
  int main(){
  	Giaovien* gv;
	gv=new Giaovien("Nguyen Van A", 1982, "CNTT",40, "HTTT");
    gv->Xuat();

}
