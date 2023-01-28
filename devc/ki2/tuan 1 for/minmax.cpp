#include<iostream.h>

int main(){
	int a,b,c,Max,Min;
	cout<<"Nhap a:";
	cin>>a;
	cout<<"Nhap b:";
	cin>>b;
	cout<<"Nhap c:";
    cin>>c;
    Max =a;
    if(b > Max){
    	Max = b;
    }
    if(c > Max){
    	Max = c;
    }
    cout<<"So lon nhat trong 3 so la "<<Max<<endl;
    Min=a;
    if(b < Min){
    	Min = b;
    }
    if(c < Min){
    	Min = c;
    }
    cout<<"So nho nhat trong 3 so la "<<Min<<endl;
    return 0;
}