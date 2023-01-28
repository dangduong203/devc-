#include<iostream>//dung de nhap xuat
#include<iomanip>//dinh nghia 1 so ham giúp cta dinh dang output
#include<fstream>//dung de thao tac voi file
using namespace std;
struct doibong{
	char macauthu[8];
	char tencauthu[30];
	char vitri[15];
	int tuoi;
	int sohuychuong;
	long long thuong;

};

void nhap(doibong a[],int &n)
{
	for(int i = 0 ; i < n ;i++)
	{
		cout<<"\nCau thu thu"<<i+1;
		cin.ignore();
		cout<<"\n\tNhap ma cau thu:";
		cin.getline(a[i].macauthu,8);//nhap du lieu cho ma cau thu kieu chuoi
		cout<<"\n\tNhap ten cau thu:";
		cin.getline(a[i].tencauthu,30);
		cout<<"\n\tNhap vi tri cau thu:";
		cin.getline(a[i].vitri,15);
		cout<<"\n\tNhap tuoi:";
		cin>>a[i].tuoi;
		cout<<"\n\tNhap so huy chuong:";
		cin>>a[i].sohuychuong;
	}
}

int tinhthuong(doibong a[],int &n)
{
	for(int i = 0; i < n ; i++)
	{
		if(a[i].sohuychuong > 10)
		{
			a[i].thuong = a[i].sohuychuong * 500000;
		}
		else if(a[i].sohuychuong >= 5)
		{
			a[i].thuong = a[i].sohuychuong * 300000;
		}
		else if(a[i].sohuychuong >= 1)
		{
			a[i].thuong = a[i].sohuychuong * 200000;
		}
	}
}

int xuatthuong(doibong a[],int &n)
{
	for(int i = 0; i < n ; i++)
	{
		if(a[i].sohuychuong > 10)
		{
			a[i].thuong = a[i].sohuychuong * 500000;
		}
		else if(a[i].sohuychuong >= 5)
		{
			a[i].thuong = a[i].sohuychuong * 300000;
		}
		else if(a[i].sohuychuong >= 1)
		{
			a[i].thuong = a[i].sohuychuong * 200000;
		}
		cout<<a[i].thuong<<endl;
	}
	
}


void tieude()
{
	cout<<"----------------------------------------------------------------------------------------------------------------------------------\n";  
	cout<<"|"<<setw(10)<<"MA CAU THU"
	    <<"|"<<setw(32)<<"TEN CAU THU"
	    <<"|"<<setw(20)<<"VI TRI"
	    <<"|"<<setw(20)<<"TUOI"
	    <<"|"<<setw(20)<<"SO HUY CHUONG"
	    <<"|"<<setw(20)<<"THUONG"
	    <<"|"<<endl
	    <<"----------------------------------------------------------------------------------------------------------------------------------\n";  
}

void xuat(doibong a[],int &n)
{
	tieude();
	for(int i=0; i<n ;i++)
	{
		cout<<"|"<<setw(10)<<a[i].macauthu
		    <<"|"<<setw(32)<<a[i].tencauthu
		    <<"|"<<setw(20)<<a[i].vitri
		    <<"|"<<setw(20)<<a[i].tuoi
		    <<"|"<<setw(20)<<a[i].sohuychuong
		    <<"|"<<setw(20)<<a[i].thuong
		    <<"|"<<endl
		    <<"----------------------------------------------------------------------------------------------------------------------------------\n";  
		    
	}
}

void xuat1cauthu(doibong a,int &n)
{
	    cout<<"|"<<setw(10)<<a.macauthu
		    <<"|"<<setw(32)<<a.tencauthu
		    <<"|"<<setw(20)<<a.vitri
		    <<"|"<<setw(20)<<a.tuoi
		    <<"|"<<setw(20)<<a.sohuychuong
		    <<"|"<<setw(20)<<a.thuong
		    <<"|"<<endl
		    <<"----------------------------------------------------------------------------------------------------------------------------------\n";  
		    
}


void sapxep(doibong a[],int &n)
{
	for(int i = 0 ; i < n-1 ; i++ )
	for(int j = i+1 ; j < n ; j++)
	if(a[i].tuoi < a[j].tuoi)
	{
		doibong tg = a[i];
		     a[i]=a[j];
		     a[j]=tg;
	}
}

void thuongnhonhat(doibong a[],int &n)
{
		for(int i = 0 ; i < n-1 ; i++ )
	for(int j = i+1 ; j < n ; j++)
	if(a[i].thuong < a[j].thuong)
	{
		doibong tg =a[i];
		     a[i]=a[j];
		     a[j]=tg;
	}
}


void xuatthuongnhonhat(doibong a[],int &n)
{
	tieude();
	thuongnhonhat(a,n);
	xuat1cauthu(a[1],n);
}

void them(doibong a[], int &n){
	int m;
	cout << "Nhap so luong cau thu muon them: ";
	cin >> m;
	for (int i = n; i < n + m; i++){
		cout<<"\nCau thu thu"<<i+1;
		cin.ignore();
		cout<<"\n\tNhap ma cau thu:";
		cin.getline(a[i].macauthu,8);
		cout<<"\n\tNhap ten cau thu:";
		cin.getline(a[i].tencauthu,30);
		cout<<"\n\tNhap vi tri cau thu:";
		cin.getline(a[i].vitri,15);
		cout<<"\n\tNhap tuoi:";
		cin>>a[i].tuoi;
		cout<<"\n\tNhap so huy chuong:";
		cin>>a[i].sohuychuong;
	}
		n+=m;
		cout << "Da them thong tin thanh cong!";
}

void xoa(doibong a[] , int &n){
	string ma = "mact";
	for(int i = 0 ; i < n ; i++){
		if(a[i].macauthu == ma ){
		 for(int j = i ; j < n ; j ++){
		 	a[j] = a[j + 1];
		 }
		 n--;
		 i--;
		}
	}
	cout<<"\t\tDANH SACH CAU THU SAU KHI XOA LA\n";
	xuat(a,n);
	
	
}

void ghi(doibong a[], int &n){
		
		ofstream file1 ("player.dat"); //mo tep de ghi
		if (!file1){//kiem tra file co duoc mo thanh cong hay khong
			cout << "Khong the tao tep";
			exit(1);
		}
	file1<<"----------------------------------------------------------------------------------------------------------------------------------\n";  
    file1<<"|"<< setw(10) << "MA CAU THU";
    file1<<"|"<< setw(32) << "TEN CAU THU";
    file1<<"|"<< setw(20) << "VI TRI";
    file1<<"|"<< setw(20) << "TUOI";
    file1<<"|"<< setw(20) << "SO HUY CHUONG";
    file1<<"|"<< setw(20) << "THUONG";
    file1<<"|"<< endl;
    file1<<"----------------------------------------------------------------------------------------------------------------------------------\n";  
    for (int i = 0; i < n; i++){
        file1<<"|"<< setw(10) << a[i].macauthu;
        file1<<"|"<< setw(32) << a[i].tencauthu;
        file1<<"|"<< setw(20) << a[i].vitri;
        file1<<"|"<< setw(20) << a[i].tuoi;
        file1<<"|"<< setw(20) << a[i].sohuychuong;
        file1<<"|"<< setw(20) << a[i].thuong;
        file1<<"|"<< endl;
        file1<<"----------------------------------------------------------------------------------------------------------------------------------\n";  
	}
	file1.close();
	cout << "Ghi tep thanh cong vui long mo tep de doc\n";
	}

	void doc( doibong a[], int &n){

		ifstream file ("player.dat");//mo tep de doc
		if (!file){//kiem tra file co duoc mo thanh cong hay khong
			cout << "Khong the mo tep";
			exit(1);
		}
		while (!file.eof()){//kiem tra ket thuc tep tin trong vong lap
		string s;
		getline(file, s);//luu toan bo thong tin o file va truyen vao bien s
		cout << s << endl;
	}
		file.close();
}


int main(){
	doibong a[15];
	int n ,bang;
	
	cout<<"============================MENU============================\n";
	cout<<" 1 :  Nhap thong tin cau thu ";
	cout<<"\n 2 :  Tinh thuong cua cau thu ";
	cout<<"\n 3 :  In danh sach cau thu";
	cout<<"\n 4 :  Sap xep theo thu tu giam dan cua cau thu ve tuoi";
	cout<<"\n 5 :  Hien thong tin cau thu co thuong nho nhat";
	cout<<"\n 6 :  Them vao cau thu va in danh sach cau thu sau khi them";
	cout<<"\n 7 :  Xoa cau thu";
	cout<<"\n 8 :  Luu danh sach cau thu ra tep";
	cout<<"\n 9 :  Doc danh sach cau thu tu tep";
	cout<<"\n 0 :  Thoat khoi chuong trinh\n";
	cout<<"============================================================\n";
	cout<<"Nhap lua chon cua ban:";
	while (bang >= 1 or bang <= 9){
	cin>>bang;
	system("cls");
	
	
	switch (bang)
	{
		case 1:
		      cout<<"Nhap so luong cau thu:";
		      cin>>n;
		      nhap(a,n);
              break ;
		case 2:
		      cout<<"THUONG CUA CAU THU LA :\n";
		      xuatthuong(a,n);
		      system("pause");
		      break;
		case 3:
		      cout<<"\t\t\t\t\tDANH SACH CAU THU LA\n";
		      tinhthuong(a,n);
		      xuat(a,n);
		      system("pause");
		      break;
	    case 4:
		      cout<<"\t\t\t\t\tBANG DANH SACH SAU KHI SAP XEP LA\n";
		      tinhthuong(a,n);
		      sapxep(a,n);
		      xuat(a,n);
		      system("pause");
		      break;
		case 5:
		      cout<<"\t\t\t\t\THONG TIN CAU THU CO THUONG NHO NHAT LA \n";
		      tinhthuong(a,n);
		      xuatthuongnhonhat(a,n);
		      system("pause");
		      break;
		case 6:
		      cout<<"\t\t\t\t\tTHONG TIN CAU THU SAU KHI THEM LA\n";
		      tinhthuong(a,n);
		      them(a,n);
		      system("pause");
		      break;
		case 7:
		      tinhthuong(a,n);  
		      xoa(a,n);
		      break;
        case 8:
              tinhthuong(a,n);
		      ghi(a,n);
		      system("pause");
		      break;
		case 9:
		      tinhthuong(a,n);
		      doc(a,n);
		      system("pause");
		      break;
		case 0:
		      system("pause");      
	}
	    cout<<endl;
	    cout << "Lua chon menu de tiep tuc" << endl;
	    cout<<"===========================MENU=============================\n";
	    cout<<" 1 : Nhap thong tin cau thu                               \n ";
  	    cout<<"2 : Tinh thuong cua cau thu                               \n ";
        cout<<"3 : In danh sach cau thu                                  \n"; 
	    cout<<" 4 : Sap xep theo thu tu giam dan cua cau thu ve tuoi     \n";
        cout<<" 5 : Hien thong tin cau thu co thuong nho nhat            \n";
        cout<<" 6 : Them vao cau thu va in danh sach cau thu sau khi them\n";
        cout<<" 7 : Xoa cau thu                                          \n";
        cout<<" 8 : Luu danh sach cau thu ra tep                         \n";
        cout<<" 9 : Doc danh sach cau thu tu tep                         \n";
        cout<<" 0 : Thoat khoi chuong trinh                              \n";
        cout<<"============================================================\n";
        cout<<"Nhap lua chon cua ban:";
	}
	return 0;
}