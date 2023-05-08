#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class OTO{
	private:
		char ma[10];
		char tenhsx[20];
		float dg;
		float dt;
		float tl;
	public:
		OTO()
		{
		}
		OTO(char *ma,char *tenhsx,float dg, float dt, float tl){
			strcpy(this->ma,ma);
			strcpy(this->tenhsx,tenhsx);
			this->dg=dg;
			this->dt=dt;
			this->tl=tl;
		}
		~OTO()
		{
		}
		friend istream & operator<<(istream &is,OTO &ot){
			cin.ignore();
			cout<<"||Nhap Ma Hang : ";
			is>>ot.ma;
			cout<<"||Nhap Ten HSX : ";
			is>>ot.tenhsx;
			cout<<"||Nhap Don Gia : ";
			is>>ot.dg;
			cout<<"||Nhap Dung Tich : ";
			is>>ot.dt;
			cout<<"||Nhap Trong Luong : ";
			is>>ot.tl;
			cout<<endl;
			return is;
		}
		float tienvc(){
			if(tl>2){
				return 100000;
			}
			else if(tl>1){
				return 500000;
			}
			else{
				return 300000;
			}
		}
		float getdt(){
			return dt;
		}
	    friend bool  operator == (OTO a,float b){
	    	return a.dt == b;
		} 
		friend ostream & operator >> (ostream& os,OTO ot){
			os<<setw(10)<<ot.ma
			  <<setw(20)<<ot.tenhsx
			  <<setw(15)<<ot.dg
			  <<setw(15)<<ot.dt
			  <<setw(15)<<ot.tl
			  <<setw(20)<<ot.tienvc();
			  cout<<endl;
			  return os;
		}  
		char *gethangsx(){
			return tenhsx;
		}
};
void td(){
	cout<<setw(10)<<"MA HANG"
	    <<setw(20)<<"TEN HSX"
	    <<setw(15)<<"DON GIA"
	    <<setw(15)<<"DUNG TICH"
	    <<setw(15)<<"TRONG LUONG"
	    <<setw(20)<<"TIEN VAN CHUYEN"<<endl;
}
int main(){
	int n ;
	cout<<"Nhap So luong OTO : ";
	cin>>n;
	OTO a[100];
	for(int i=0;i<n;i++){
		cout<<"\tNhap Thong Tin OTO Thu "<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"\t====DANH SACH OTO CO DUNG TICH = 2.5===="<<endl;
	td();
	for(int i=0;i<n;i++){
		if(a[i].getdt()==2.5){
			cout<<a[i];
		}
	}
	cout<<"\t====THONG TIN OTO CO HANG SX TOYOTA===="<<endl;
	td();
	bool KT = false;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].gethangsx(),"TOYOTA")==0){
			cout<<a[i];
			KT=true;
		}
	}
	if(KT == false){
		cout<<"\nKhong Tim Thay Trong DS!!"<<"\nChen Them HSX Vao Dau"<<endl;
		for(int i=n;i>0;i--){
			a[i]=a[i-1];
		}
		OTO k;
		cout<<" Nhap Phan Tu Can Chen "<<endl;
		cin>>k;
		a[0]=k;
		n++;
		cout<<"\t====DANH SACH SAU KHI CHEN==== "<<endl;
		td();
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(strcmp(a[i].gethangsx(),"TOYOTA")==0){
				n--;
				for(int k=i;k<n;k++){
					a[k]=a[k+1];
				}
			}
		}
		cout<<"\t====DANH SACH SAU KHI XOA===="<<endl;
		td();
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
