#include<iostream>
using namespace std;

void kiemTraHoanHao(int n){
	int tong;
	for(int i= 1; i<n ; i++){
		if(n%i==0)
			tong +=i;
    }if(tong==n)
     cout<<n<<" La so hoan hao "<<endl;
    else
	cout<<n<<" Ko phai la so hoan hao "<<endl;
} 

int soHoanHao(int a[] , int i )	{
	int sum =0;
	for(int j=1;j<a[i];j++)
		if(a[i]%j ==0)
			sum+=j;
	if(sum==a[i]) 
		return 1;
    else
		return 0;
}

int main(){
	int n;
	cout<<"Kiem tra hoan hao \n";
	cout<<"Nhap n =";cin>>n;
	kiemTraHoanHao(n);
	int x,i;
	do{
	cout<<"\nNhap vao so luong cua phan tu cua mang :";cin>>x;
	}while(n<=0);
	int a[x];
	for(i=1; i<=x; i++){
		cout<<"a["<<i<<"] =";
		cin>>a[i];
	}
		cout<<"Cac so hoan hao trong mang la :";
	for(i=0;i<n;i++){
		if(a[i]<=1)
		continue;
		if(soHoanHao(a,i)==1)
		cout<<a[i]<<" ";
	}
	return 0;
}