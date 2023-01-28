#include<iostream.h>
#include<string.h>
int main(){
	char s[50];
    cout<<"Nhap vao xau ky tu :";
	cin.getline(s,50);
	cout<<"Xau da nhap la :"<<s<<endl;
	strrev(s);
	cout<<"Xau dao nguoc la :";	
	puts(s);
    cout<<endl;
}