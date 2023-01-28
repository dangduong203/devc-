#include<iostream.h>
#include<string.h>
int main(){             
char s[50];
int n,dem=1;
cout<<"\nNhap vao xau ki tu: ";
cin.getline(s,50);
n=strlen(s);
for(int i=0; i<n; i++){                           
     if(s[i] ==' ' )
        dem++;
		n--; 
}
cout<<"So tu trong xau: "<<dem<<endl;
}