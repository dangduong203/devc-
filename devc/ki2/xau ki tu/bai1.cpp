#include<iostream.h>
#include<string.h>
int main(){
	char s[100];
	int n;
    cout<<"Nhap vao xau ky tu :";
	cin.getline(s,100);
	n=strlen(s);
	cout<<"Xau da nhap la :"<<s<<endl;
	cout<<"Xau dao nguoc la :";
	for(int i=n-1;i>=0;i--) cout<<s[i];	
    cout<<endl;
}
