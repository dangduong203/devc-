#include <iostream>
#include<string.h>
using namespace std;
class OTO{
	private:
		char mh[10];
		char tenhsx[30];
		float dg;
		float dt;
		float tl;
	public:
		OTO(){}
		OTO(char *mh,char *tenhsx,float dg,float dt,float tl){
			strcpy(this->mh,mh);
			strcpy(this->tenhsx,tenhsx);
			this->dg=dg;
			this->dt=dt;
			this->tl=tl;
		}
		~OTO(){}
		friend istream & operator >> (istream &is,OTO &a){
			cin.ignore();
			cout<<"||Nhap ma hang: ";
			is>>a.mh;
			cout<<"||Nhap ten hang san xuat: ";
			is>>a.tenhsx;
			cout<<"||Nhap don gia: ";
			is>>a.dg;
			cout<<"||Nhap dung tich xilanh: ";
			is>>a.dt;
			cout<<"||Nhap trong luong: ";
			is>>a.tl;
			cout<<endl;
			return is;
		}
		float Tienvc(){
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
		float getdungtich(){
			return dt;
		}
			int operator ==(int x)
		{
			return getdungtich() == x;
		}
		friend ostream & operator << (ostream &os,OTO &a){
			os<<"||Ma hang: "<<a.mh;
			os<<"\n||Ten hang san xuat: "<<a.tenhsx;
			os<<"\n||Don gia: "<<a.dg;
			os<<"\n||Dung tich xilanh: "<<a.dt;
			os<<"\n||Trong luong: "<<a.tl;
			os<<"\n||Tien van chuyen: "<<a.Tienvc();
			cout<<endl;
			return os;
		}
	char* gethangsx(){
		return tenhsx;
	}
};

int main(){
	int n;
	cout<<"Nhap so luong oto: ";
	cin>>n;
	OTO a[100];
	for (int i=0;i<n;i++){
		cout<<"\n\tNhap thong tin oto thu "<<i+1<<endl;
		cin>>a[i];
	}
	cout<<"\t====DANH SACH XE CO DUNG TICH = 2.5===="<<endl;
	for(int i=0; i<n; i++)
	{
		if(a[i].getdungtich()== 2.5)
		{
		    cout<<"\tThong tin xe thu "<<i+1<<endl;
			cout << a[i];
		}	
	}
	cout<< " \n\t====DANH SACH HANG CO TEN TOYOTA===="<<endl;
 	bool KT = false;
	for (int i=0 ; i<n ; i++){
		if (strcmp(a[i].gethangsx(),"TOYOTA")==0){
			
			KT=true;
		}
	
	}
	if (KT == false) {
		cout << "\nKhong thay trong DS!!" << "\nChen them HSX vao dau DS" << endl;
		for (int i = n; i > 0; i--) {
			a[i] = a[i - 1];
		}
		OTO k;
		cout << "Nhap phan tu can chen "<<endl;
		 cin >> k;
		a[0] = k;
		n++;

		cout << "\n\t====DANH SACH SAU KHI CHEN====" << endl;
		for (int i = 0; i < n; i++)
		{
			cout<<"\n\tThong tin xe thu "<<i+1<<endl;
			cout << a[i];
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			if (strcmp(a[i].gethangsx(), "TOYOTA") == 0) {
				n--;
				for (int k = i; k < n; k++) {
					a[k] = a[k + 1];
				}
			}
		}
		cout << "\n\t====DANH SACH SAU KHI XOA====" << endl;
		for (int i = 0; i < n; i++)
		{
			cout<<"\tThong tin xe thu "<<i+1<<endl;
			cout << a[i];
		}
		cout << endl;
	}
	return 0;

}



