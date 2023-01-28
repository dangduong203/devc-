#include<iostream.h>
using namespace std;
int max(int a, int b, int c, int d)
{
	int max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	if(max<d){
		max=d;
	}
	return 0;
}
int main()	
{
	
	int a,b,c,d;
	cout<<"\nNhap 4 so a, b, c, d: \n";
	cin>>a>>b>>c>>d;
	cout<<"\nSo lon nhat trong 4 so la: "<<max(a,b,c,d)<<endl;
	

}