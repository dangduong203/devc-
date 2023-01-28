#include<iostream.h>

int main(){
	
    int a , b;
	double x;
    cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	
	if(a==0){
		if(b==0)
	    	cout<<" Ptrinh vo so nghiem";
		else
		    cout<<" Ptrinh vo nghiem ";		
	} 
	else{
		x =(float) -b/a;
		cout<<"Ptrinh co nghiem x >"<<x;
		
	}
	cout<<endl;
	return 0;
	
}