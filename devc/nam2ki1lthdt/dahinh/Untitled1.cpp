#include<iostream>
using namespace std;
class mayvitinh{
	public:
		void show(){
			 cout<<"mayvitinh"<<endl;
			 
		}
};
class mayacer: public mayvitinh{
	public:
		void show (){
			cout<<"may acer"<<endl;
		}
		
};
int main(){
	mayacer may1;
	mayvitinh *tenmay = &may1;
	tenmay->show();
}
	


