#include <iostream>
using namespace std;
class SP{
	private:
		int pt;
		int pa;
	public:
		SP(){}
		friend istream & operator >> (istream &is,SP &a){
			cout<<"\nNhap phan thuc: ";
			is>>a.pt;
			cout<<"Nhap phan ao: ";
			is>>a.pa;
			cout<<endl;
			return is;
		}
		friend ostream & operator << (ostream &os,SP &a){
			if(a.pa>=0){
				os<<a.pt<<"+j"<<a.pa<<endl;
			}
			else{
				os<<a.pt<<"-j"<<a.pa<<endl;
				return os;
			}
		}
};
int main(){
	SP sp1,sp2;
	cout<<"Nhap so phuc A : ";
	cin>>sp1;
	cout<<"Nhap so phuc B : ";
	cin>>sp2;
	cout<<"In ra so phuc A: "<<sp1<<endl;
	cout<<"In ra so phuc B: "<<sp2<<endl;
	
}
