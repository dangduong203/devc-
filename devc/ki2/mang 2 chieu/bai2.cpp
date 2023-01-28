#include<iostream>
using namespace std;

void nhap(int a[100][100], int n, int m){
    cout<<"Nhap mang hai chieu: \n";
    for(int i =0; i<n; i++){
        for(int j =0; j<m; j++){
        	cout<<"a["<<i<<"]["<<j<<"]=";
            cin>>a[i][j];
        }
    }
}

void xuat(int a[100][100], int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
                cout<<a[i][j]<<"   ";
        }
        cout<<"\n";
    }
}
void chuyenvi(int a[100][100], int n, int m){
	for (int i=0; i < m; i++) {
      for (int j= 0; j < n; j++) {
         cout<<a[j][i]<<"   ";
         
      }
      cout<<"\n";
   }
}
int main(){
    int a[100][100];   
    int n;            
    int m;            
    cout<<"Nhap so hang: "; cin>>n;
    cout<<"Nhap so cot: "; cin>>m;
    nhap(a, n, m);   
    cout<<"\nMa tran da nhap la: "<<endl;
    xuat(a, n, m);
    cout<<"Ma tran chuyen vi la:"<<endl;
    chuyenvi(a ,n ,m);
}