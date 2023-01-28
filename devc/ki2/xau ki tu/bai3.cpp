#include<iostream.h>
#include<string.h>
#include<cctype>
int main(){             
    char s[50];
    int n,dem=0;
    cout<<"\nNhap vao xau ki tu: ";
    cin.getline(s,50);
    n=strlen(s);
    for(int i=0; i<n; i++){
    	if(s[i]=='a'|| s[i]=='b' )
    	dem++;
    }
cout<<"So ki tu a va b la :"<<dem<<endl;
}