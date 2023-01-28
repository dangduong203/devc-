#include<iostream>
#include<cmath>
using namespace std;

int kiemTraSoNguyenTo(int n){
   if(n<2){
   	cout<<n<<" Ko phai la so nguyen to "<<endl;
   }else{
   	for(int i= 2 ; i<n;i++){
   		if(n%i==0){
   			cout<<n<<" Ko phai la so nguyen to "<<endl;
   			return 0;
		   }
	   }cout<<n<<" La so nguyen to"<<endl;
}
}
 
int inSoNguyenTo(int n){
	cout<<"Cac so nguyen to trong pham vi n la :";
	int kiemTra = 1;
	for(int i =2 ; i<=n; i++){
		for( int j = 2 ; j <=(i- 1);j++){
			if(i%j==0){
				kiemTra =0;
			}
		}if(kiemTra == 1){
				cout<<i<<" ";
		}
	kiemTra=1;
}

}


int main(){
	int n;
	cout<<"Kiem tra so nguyen to\n";
	cout<<"Nhao vao n = ";cin>>n;
	kiemTraSoNguyenTo(n);
	inSoNguyenTo(n);
}