#include<iostream.h>
#include<math.h>
using namespace std;

int main(){
	int n;
	int s = 1;
	cout<<"nhap n:";
	cin>>n;
	
	for(int i = 1;i <= n; i++ )
	
			s = s*(2*i-1);
		
	
     
	
	cout << "Tich p la :"<< s <<endl;
	return 0;
	
}