#include<iostream>
using namespace std;
class VecTor3{
	private:
	int a,b,c;
	public:
		VecTor3(int va=0,int vb=0,int vc=0){
			a=va;
			b=vb;
			c=vc;
		}
	~VecTor3(){}
	void Nhap(){
		cout<<"Nhap Vector: ";
		cin>>a>>b>>c;
		cout<<endl;
	}
    void Xuat(){
    	cout<<"("<<a<<","<<b<<","<<c<<")";
	}
	VecTor3 tong(VecTor3 t){
		VecTor3 tong2;
		tong2.a=this->a+t.a;
		tong2.b=this->b+t.b;
		tong2.c=this->c+t.c;
		return tong2;
	}
};
int main(){
	VecTor3 vt1(2,4,6);
	VecTor3 vt2(3,5,7);
	VecTor3 sum;
	sum=vt1.tong(vt2);
	sum.Xuat();
	return 1;
}
