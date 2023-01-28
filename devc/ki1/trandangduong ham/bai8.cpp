#include <iostream> 
#include <cmath> 
using namespace std;

int timUCLN(int p,int q){
	if(q==0){
		return p;
	}else{
         return timUCLN(q,p%q);
	}
}

int main(){
  int UCLN1,UCLN2;
  int a,b,c;
  do{
  cout<<"Tim UCLN cua 3 so nguyen duong\n";
  cout<<"a = ";cin>>a;
  cout<<"b = ";cin>>b;
  cout<<"c = ";cin>>c;
  }while(a<0||b<0||c<0);
  UCLN1 = timUCLN(a,b);
  UCLN2 = timUCLN(b,c);
  cout<<"UCLN cua 3 so nguyen duong la :"<<timUCLN(UCLN1,UCLN2);
 return 0;
}