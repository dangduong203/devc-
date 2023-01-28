#include<iostream.h>

int main(){
	
    float a , b, x;
    cout<<"a = ";cin>>a;
	cout<<"b = ";cin>>b;
	
	if(a==0){
		if(b==0)
	    	cout<<" Ptrinh vo so nghiem";
		else
		    cout<<" Ptrinh vo nghiem ";		
	} 
	else{
		x = -b/a;
		cout<<"Ptrinh co nghiem x >"<<x;
		
	}
	cout<<endl;
	return 0;
	
}