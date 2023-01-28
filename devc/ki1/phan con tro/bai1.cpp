#include<iostream> 

using namespace std;

   int main() 
    { 
     int a[5],i; 
     int *p=a; 
     cout<<"Nhap 5 so nguyen:\n"; 
     cin>>*p>>*(p+1)>>*(p+2)>>*(p+3)>>*(p+4); 
     cout<<"Cac so ban vua nhap la:\n";
 
     for(i=0;i<5;i++) 
        cout<<a[i]<<endl; 
     
     
     return 0; 
  
    }