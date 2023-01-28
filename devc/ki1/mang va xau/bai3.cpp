#include<iostream>
#include<string.h>
using namespace std;

int daoChuoi(char s1[],char s2[]){
	int i;
	for (i=0;i<strlen(s1);i++)
	s2[i]=s1[strlen(s1)-1-i];
	s2[i+1]='\0';	
	}
	
int demSoA(char s1[]){
  char a;
  int soLuong=0;
  int tong;
  for(int i=0;i<strlen(s1);i++){
  		if(s1[i] == 'a'){
  			tong +=s1[i];
  			soLuong++; 			
  }		 
}
return soLuong;
}

int demSoB(char s2[]){
  char b;
  int soLuong=0;
  int tong;
  for(int j=0;j<strlen(s2);j++){
  		if(s2[j] == 'b'){
  			tong +=s2[j];
  			soLuong++; 			
  }		 
}
return soLuong;
}


int main(){
	char s1[100] , s2[100];
	int i,dem=0;
	cout<<"Nhap vao xau ki tu :";gets(s1);
	for(int i=0;i<=strlen(s1);i++)
		if(s1[i]==' '&& s1[i+1] !=' ')
		dem++;
		if(s1[0]!=' ')
		dem++;
		cout<<"So tu trong xau la :"<<dem<<endl;
		daoChuoi(s1,s2);
		cout<<"Chuoi dao nguoc la :"<<s2<<endl;
	    cout<<"So luong cua phan tu a trong xau ki tu la :"<<demSoA(s1)<<endl;
	    cout<<"So luong cua phan tu b trong xau ki tu la :"<<demSoB(s2)<<endl;
}