#include <iostream>
using namespace std;
class SP{
	private:
		int pt;
		int pa;
	public:
		SP(){
			this->pt=0;
			this->pa=0;
		}
		SP(int pt, int pa){
			pt=pt;
			pa=pa;
		}
		~SP(){}
	void In()
	{
		cout<<pt<<"+"<<pa<<"*i";
	}
	SP tong(SP t)
	{
		SP kq;
		kq.pt=this->pt+t.pt;
		kq.pa=this->pa+t.pa;
		return kq;
	}		
};
int main(){
	SP sp1(4,5);
	SP sp2(7,2);
	SP sp3(25,4);
	SP tong2,tong3;
	tong2 = sp1.tong(sp2);
	tong3 = sp3.tong(tong2);
	cout<<"Tong 3 so phuc: ";
	tong3.In();

}