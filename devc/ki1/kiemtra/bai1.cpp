#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
int main()
{
int x,y;
char n;
cout<<"nhap vao x : ";
cin>>x;
cout<<" nhap vao y : ";
cin>>y;
cout<<" nhap vao 1 trong 4 toan tu +, -, *, / ";
cin>>n;
if(n=='+')
cout<<x<<" + "<<y<<"= "<<x+y<<"\n";
if(n=='-')
cout<<x<<" - "<<y<<"= "<<x-y<<"\n";
if(n=='*')
cout<<x<<" * "<<y<<"= "<<x*y<<"\n";
if(n=='/')
{
if(y==0)
cout<<"vi mau bang 0 nen khong chia duoc \n";
else
cout<<x<<" / "<<y<<"= "<<x/y<<"\n";
}
return 0;
}