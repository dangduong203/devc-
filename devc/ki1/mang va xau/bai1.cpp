#include<iostream>
using namespace std;
float a[100][100];
float m,n;

void nhapMaTran(float a[100][100],float &m, float &n){
	do{
		cout<<"Nhap vao so hang cua ma tran m = ";cin>>m;
		cout<<"Nhap vao so cot cua ma tran n = ";cin >>n;
	}while(m<=0||n<=0);	
  for(int i=1;i<=m;i++){
  	for(int j=1;j<=n;j++){
  		cout<<"a["<<i<<"]["<<j<<"] =";
  		cin>>a[i][j];
	  }
  }
}
void xuatMaTran(float a[100][100],float m,float n){
	cout<<"\nMa Tran :\n";
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
					cout<<"\t"<<a[i][j];
		}
    cout<<"\n";
	}
}
float tinhTrungBinh(float a[100][100],float m , float n){
	float tb,tong=0;
	int dem=0;
	for(int i=1 ;i<=m;i++){
		for(int j=1; j<=n;j++){
			if(a[i][j]<=0)
			{
				tong=tong+a[i][j];
				dem++;
			}
		}
	}if(dem==0)
	    cout<<"Mang ko co phan tu am \n";
    else{
    	tb=tong/dem;
    	return tb;
	}
}
float soLonNhat(float a[100][100], float m ,float n){
	int max = a[1][1];
	for(int i=1; i<=m;i++){
		for(int j =1; j<=n;j++){
			if(max<a[i][j]){
				max =a[i][j];
			}
		}
	}return max;
}
int main(){
	nhapMaTran( a,m,n);
	xuatMaTran( a,m,n);
    cout<<"Gia tri trung binh cua cac phan tu am la :"<<tinhTrungBinh(a,m,n);
    cout<<"\nPhan tu lon nhat trong mang la :"<<soLonNhat(a,m,n);
	return 0;
}