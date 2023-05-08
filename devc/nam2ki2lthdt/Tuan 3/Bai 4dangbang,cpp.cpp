#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
class maytinh{
	private:
		char mh[10];
		char tenhsx[30];
		float dg;
		float dl;
		float tl;
	public:
		maytinh(){}
		maytinh(char *mh,char *tenhsx,float dg,float dl,float tl){
			strcpy(this->mh,mh);
			strcpy(this->tenhsx,tenhsx);
			this->dg=dg;
			this->dl=dl;
			this->tl=tl;
		}
		~maytinh(){}
		friend istream & operator >> (istream &is ,maytinh &mt){
			cin.ignore();
			cout<<"||Nhap Ma Hang : ";
			is>>mt.mh;
			cout<<"||Nhap Ten Hang SX : ";
			is>>mt.tenhsx;
			cout<<"||Nhap Don Gia : ";
			is>>mt.dg;
			cout<<"||Nhap Dung Luong : ";
			is>>mt.dl;
			cout<<"||Nhap Trong Luong : ";
			is>>mt.tl;
			cout<<endl;
			return is;
		}
		float tienvc(){
			if(tl>2){
				return 100000;
			}
			else if(tl>1){
				return 50000;
			}
			else{
				return 30000;
			}
		}
		friend ostream & operator << (ostream &os ,maytinh mt){
			os<<setw(10)<<mt.mh
			  <<setw(20)<<mt.tenhsx
			  <<setw(15)<<mt.dg
			  <<setw(15)<<mt.dl
			  <<setw(15)<<mt.tl
			  <<setw(15)<<mt.tienvc();
			  cout<<endl;
			  return os;
		}
		char *gethangsx(){
			return tenhsx;
		}
		float getdl(){
			return dl;
		}
};
void td(){
	cout<<setw(10)<<"Ma Hang"
	    <<setw(20)<<"Hang SX"
	    <<setw(15)<<"Don Gia"
	    <<setw(15)<<"Dung Luong"
	    <<setw(15)<<"Trong Luong"
	    <<setw(15)<<"Tien VC"<<endl;
}

int main(){
	int n;
	cout<<"Nhap So Luong May Tinh : ";
	cin>>n;
	maytinh a[100];
	for(int i=0;i<n;i++){
		cout<<"\n\tNhap Thong Tin May Tinh Thu "<< i+1 <<endl;
		cin>>a[i];
	}
	cout<<"\t====DANH SACH CO DUNG LUONG RAM = 16===="<<endl;
	td();
	for(int i=0;i<n;i++){
		if(a[i].getdl()==16){		
			cout<<a[i];
		}
	}
	cout<<"\n\t====THONG TIN MAY TINH CO HANG SX SONY===="<<endl;
	td();
	bool KT = false;
	for(int i=0;i<n;i++){
		if(strcmp(a[i].gethangsx(),"SONY")==0){
			cout<<a[i];
			KT=true;
		}
	}
	if (KT==false){
		cout << "\nKhong Thay Trong DS!!" << "\nChen Them HSX Vao Dau DS" << endl;
		for(int i=n;i>0;i--){
			a[i]=a[i - 1];
		}
		maytinh k;
		cout<<"Nhap Phan Tu Can Chen "<<endl;
		cin>>k;
		a[0]=k;
		n++;
		
		cout<<"\t====DANH SACH SAU KHI CHEN===="<<endl;
		td();
		for (int i = 0; i < n; i++)
		{
			cout << a[i];
		}
	}
	else{
		for(int i=0;i<n;i++){
			if(strcmp(a[i].gethangsx(),"SONY")==0){
				n--;
				for(int k=i;k<n;k++){
					a[k]=a[ k + 1 ];
				}
			}
		}
		cout<<"\n\t====DANH SACH SAU KHI XOA===="<<endl;
			td();
		for(int i=0;i<n;i++){
			cout<<a[i];
		}
		cout<<endl;
	}
	return 0;
}


