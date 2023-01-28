// bai5 tinh tien dien iteu thu cua 1 ho dan

#include<iostream.h>


int main(){
	int chiso,tiendien;
	
	
	cout<<"Nhap so tien dien tieu thu:";
	cin>>chiso;
	
	if(chiso <= 100)
		
       tiendien = chiso*500;
    else
	   tiendien = chiso*800;
	   
	cout<<"so tien dien ma ho do phai tra la:"<<tiendien<<endl;
	
	return 0;   
}