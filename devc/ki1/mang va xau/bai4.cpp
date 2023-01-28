#include<iostream>
#include<string.h>
using namespace std;

void soLanXuaHien(char s[]){
	int n=strlen(s);
	for(int i=0; i<n;i++){
	   bool Kt = true;
	   for(int j= i-1; j>=0; j--){
	   	if(s[i]==s[j]){
	   		Kt = false;
	   		break;
		   }
	   }if(Kt==true){
	   	int dem=0;
	   	for(int k=0 ; k<n; k++){
	   		if(s[i]==s[k]){
	   			dem++;
			   }
		   }
	   	cout<<"\n Ky tu "<<s[i]<<" xuat hien "<<dem<<" lan  ";
	   }
	}
}


int main(){
	char s[100] = " ";
	cout<<"Nhap vao 1 xau ki tu ";
	gets(s);
	soLanXuaHien(s);
	system("pause");
	return 0;
	
	
}