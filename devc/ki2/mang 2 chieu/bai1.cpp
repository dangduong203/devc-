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
                cout<<a[i][j]<<"  ";
        }
        cout<<"\n";
    }
}
void sole(int a[100][100], int n, int m){
	for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        if(i%2==1)cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<"  ";
        
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
    cout<<"\nMang da nhap: "<<endl;
    xuat(a, n, m);  
    cout<<"cac phan tu le la\n";
    sole(a, n, m);
    return 0;
}