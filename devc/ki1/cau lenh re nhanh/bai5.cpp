// bai5 tinh tien dien iteu thu cua 1 ho dan

#include<iostream.h>


int main(){
	int chiso,tiendien;
	
	
	cout<<"Nhap so tien dien tieu thu:"<<endl;
	cin>>chiso;
	
	if(chiso <= 80)
		
       tiendien = chiso*350;
    else
	   tiendien = chiso*900;
	   
	cout<<"so tien dien ma ho do phai tra la:"<<tiendien<<endl;
	
	return 0;   
}