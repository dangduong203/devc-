#include<iostream>
#include<string.h > 
using namespace std;
class Nguoi{
	protected:
	char Ten[20];
	int ns;
    public:
    Nguoi(){
    	strcpy(Ten," ");
    	ns=0;
    }
    Nguoi(char*Ten,int ns){
    	strcpy(this->Ten,Ten);
    	this->ns=ns;
    }
~Nguoi(){}
void Nhap(){
	fflush(stdin);
	cout<<" Nhap Ten: ";
	cin.getline(Ten,20);
	cout<<" Nhap nam sinh: ";
	cin>>ns;
}
 void Xuat(){
 	cout<< " Ten "<<Ten<<endl;
 	cout<<" Nam sinh "<<ns<<endl;
 }
  friend istream&operator>>(istream&is,Nguoi&ng){
  	ng.Nhap();
  	return is;
  }
  friend ostream&operator<<(ostream&os,Nguoi ng){
  	ng.Xuat();
  	return os;
  }
};
 class Sinhvien{
 	protected:
 	char hk[20];
 	float diem;
 	public:
 	Sinhvien(){
	 	strcpy(hk," ");
	 	diem=0;
	 }
	 Sinhvien(char*hk,float diem){
 		strcpy(this->hk,hk);
 		this->diem=diem;
 	}
	 void Nhap(){
	 	fflush(stdin);
 		cout<<" Nhap hanh kiem: ";
 		cin.getline(hk,20);
 	    cout<<" Nhap diem : ";
 	    cin>>diem;
	 }
	 void Xuat(){
 		cout<<" Hanh kiem : "<<hk<<endl;
 		cout<<" Diem "<<diem<<endl;
 	}
 	friend istream&operator>>(istream&is,Sinhvien&sv){
	 	sv.Nhap();
	 	return is;
	 	}
 	friend ostream&operator<<(ostream&os,Sinhvien sv){
	 	sv.Xuat();
	 	return os;
	 }
};
 class SVTC:public Nguoi,public Sinhvien{
 	float hp;
 	public:
 	SVTC(){
	 	hp=0;
	 }
 	SVTC(char*Ten,int ns,char*hk,float diem,float hp):Nguoi(Ten,ns),Sinhvien(hk,diem){
	 	this->hp=hp;
	 }
	 void Nhap(){
 		Nguoi::Nhap();
 		cout<<" Nhap hoc phi: ";
 		cin>>hp;
 		Sinhvien::Nhap();
 	}
 	 void Xuat(){
 	 	Nguoi::Xuat();
 	 	cout<<" Hoc phi :"<<hp<<endl;
 	 	cout<<" Hoc bong : "<<tinhocbong()<<endl;
 	 	Sinhvien::Xuat();
 	 }
 	 friend istream&operator>>(istream&is,SVTC&sv){
 	 	sv.Nhap();
 	 	return is;
 	 }
 	 friend ostream&operator<<(ostream&os,SVTC sv){
 	 	sv.Xuat();
 	 	return os;
 	 }
 	 char*gethk(){
 	 	return hk;
 	 }
 	 float getdiem(){
 	 	return diem;
 	 }
 	 float tinhocbong(){
 	   if(strcmpi(gethk(),"Tot")==0&&getdiem()>=8.0){
   	 	return 5000000;
   	 }
   	 else{
 	   	if((strcmpi(gethk(),"Tot")==0 && getdiem()>=8.0)|| (strcmpi(gethk(),"Kha")==0 && getdiem()>=8.0))
        return 3000000;
 	   }
		if((strcmpi(gethk(),"Tot")==0&&getdiem()>=7.0)||(strcmpi(gethk(),"Kha")==0 && getdiem()>=7.0)){
	    return 2000000;
		}
		else{
			return 0;
		}	
 	 }
 };
 int main(){
 	int n;
 	cout<<" Nhap so sinh vien tai chuc :";
 	cin>>n;
 	SVTC s[20];
 	for(int i=0;i<n;i++){
	 	cout<<" Sinh vien thu :"<<i+1<<endl;
        cin>>s[i];
	 }
	 	for(int i=0;i<n;i++){
	 	cout<<" Sinh vien thu :"<<i+1<<endl;
	 	cout<<s[i];
	 }
	 cout<<" Sinh vien duoc hong bong :"<<endl;
	 for(int i=0;i<n;i++)
	 if(s[i].tinhocbong()!=0)
	 cout<<s[i];
	 
	 
	 for(int i=0;i<n-1;i++){
 		for(int j=i+1;j<n;j++){
		 	if(s[i].getdiem()<s[j].getdiem()){
	 			SVTC tg=s[i];
	 			s[i]=s[j];
	 			s[j]=tg;
	 		}
		 }
 	}
 	 cout<<" Danh sach theo thu tu diem tang dan"<<endl;
 	 for(int i=0;i<n;i++){
 	 	cout<<s[i];
 	 }
 }
