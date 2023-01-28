#include<iostream>
using namespace std;

class phanso{
	private:
		int tuso, mauso;
	public:
		friend istream&operator >>(istream& is, phanso& a){
			cout<<"\nNhap tu so: ";is>>a.tuso;
			cout<<"Nhap mau so: ";is>>a.mauso;
			return is;
			
		}
		friend ostream&operator <<(ostream& os, phanso a){
			os<<a.tuso<<"/"<<a.mauso;
			return os;
		}
};
int main(){
	int n;
	cout<<"Nhap so luong phan so : ";
	cin>>n;
	phanso a[n];
	for(int i=0;i<n;i++){
		cout<<"\nPhan so thu: "<<i+1;
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cout<<"\nPhan so thu "<<i+1<<"la:";
		cout<<a[i];
	}
}
