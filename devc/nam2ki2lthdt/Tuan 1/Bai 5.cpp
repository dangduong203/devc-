#include<iostream>
using namespace std;
class PS{
private:
	int ts , ms;
	public:
		PS(int a,int b){
			this->ts=a;
			this->ms = b;
		}
		~PS(){
		}
	int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}

	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
void RutGon(){	this->ms = ms/UCLN(ts,ms);
this->ts = ts/UCLN(ts,ms);

}
void xuat(){
	cout<<ts<<"/"<<ms<<endl;
}
void tong2ps(PS &ps1, PS &ps2){
	PS sum(0,0);
	sum.ts = ps1.ts*ps2.ms + ps2.ts*ps1.ms;
	sum.ms = ps1.ms*ps2.ms;
	sum.RutGon();
	cout<<"Tong 2 phan so la: ";sum.xuat();
}
};
int main(){
	PS ps1(1,2) , ps2(3,4),SUM(0,0);
	SUM.tong2ps(ps1,ps2);
}