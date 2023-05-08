#include<iostream>
#include<cstring>
using namespace std;
class HangHoa{
	protected:
   char Ma[20];
   char Ten[20];
   float dongia;
   	public:
   	HangHoa(){}
   	HangHoa(char*Ma,char*Ten,float dongia){
	   	strcpy(this->Ma,Ma);
	    strcpy(this->Ten,Ten);
	   	this->dongia=dongia;
	   }
 ~HangHoa(){}
  void Nhap(){
  	fflush(stdin);
  	cout<<" Nhap vao ma : ";
  	cin>>Ma;
  	cout<<" Nhap vao ten : ";
  	cin>>Ten;
  	fflush(stdin);
  	cout<<" Nhap don gia : ";
  	cin>>dongia;
  }  
  void Xuat(){
  	cout<<" Ma : "<<Ma<<endl;
  	cout<<" Ten : "<<Ten<<endl;
  	cout<<" Don gia : "<<dongia<<endl;
  }
  float getdongia(){
  	return dongia;
  }
  char*getma(){
  	return Ma;
  }
  char*getht(){
  	return Ten;
  }
};
 class MT:public HangHoa{
 	private:
 	float tocdo;
 	float sl;
 	public:
 	MT(){}
 	MT(float td,float sl,char*Ma,char*Ten,float dongia):HangHoa(Ma,Ten,dongia){
	 	tocdo=td;
	 	sl=sl;
	 }
	~MT(){}
	void Nhap() {
        HangHoa::Nhap();
        cout << "Nhap toc do: "; cin >> tocdo;
        cout << "Nhap so luong: "; cin >> sl;
    }
    void Xuat() {
        HangHoa::Xuat();
        cout << "Toc do: " << tocdo << endl;
        cout << "So luong: " << sl << endl;
        cout<<" Thanh tien : "<<getthanhtien()<<endl;
    }
friend istream&operator>>(istream&is,MT&mt){
	mt.Nhap();
	return is;
}
  friend ostream&operator<<(ostream&os,MT mt){
  	mt.Xuat();
  	return os;
  }
	float getsl(){
		return sl;
	}
	float getthanhtien(){
		return getdongia()*getsl();
	}
	float gettocdo(){
		return tocdo;
	}
 };
 class MTXT:public MT{
 	private:
 	float trongluong;
 	public:
 	MTXT(){}
 	MTXT(char*Ma,char*Ten,float dongia,float tocdo,float sl,float trongluong):MT(tocdo,sl,Ma,Ten,dongia){
	 	this->trongluong=trongluong;
	 }
~MTXT(){}
    void Nhap(){
    	MT::Nhap();
    	cout<<" Nhap trong luong : ";
    	cin>>trongluong;
    }
    void Xuat(){
    	MT::Xuat();
    	cout<<" Trong luong : "<<trongluong<<endl;
    	cout<<" Phi bao tri : "<<getphibaotri()<<endl;
    }
 	friend istream& operator>>(istream& is, MTXT& mtxt) {
        mtxt.Nhap();
        return is;
    }
    friend ostream& operator<<(ostream& os, MTXT& mtxt) {
        mtxt.Xuat();
        return os;
    }
  	float getphibaotri(){
	  	return (getdongia()*5)/100;
	  }
	  int TimTen(char x[]){
		if(strcmp(Ten,x)==0)
		return 1;
		return 0;
	}
 };
  void Timkiem(MTXT m[],int&n){
  	int i;
  	 cout<<" Nhap thong tin may tinh xach tay can tim :";
	 char Ten[20];
 	 cin>>Ten;
	 for(i=0;i<n;i++){
     if (m[i].TimTen(Ten)){
      cout<<m[i];
      break;
     }
	 }
      if(i==n){
      cout<<" Khong tim thay may tinh trong danh sach !!"<<Ten<<endl;
      }
      cout<<" Danh sach theo ten "<<endl;
	for (int i =0 ; i<n ; i++){
		for (int j=i+1 ; j<n ; j++){
			if (strcmpi(m[i].getht(),m[j].getht())>0){
				MTXT temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
		cout<<m[i];
	}
  }
   void Danhsachnhap(MTXT m[],int&n){
      	for(int i=0;i<n;i++){
	 	cout<<" May tinh thu : "<<i+1<<endl;
	 	cout<<m[i];
	 }
      }
   void Phibaotri(MTXT m[],int &n){
   	cout<<" Tong phi bao tri";
 float sum;
 for(int i=0;i<n;i++){
 	sum+=m[i].getphibaotri();
 }
 cout<<" Tong phi bao tri la : "<<sum<<endl;
   }
    void Maymin(MTXT m[],int &n){
    	MTXT mtMin = m[0];
for (int i = 1; i < n; i++) {
    if (m[i].gettocdo() < mtMin.gettocdo()) {
        mtMin = m[i];
    }
}
cout << "May tinh xach tay co toc do nho nhat: " << endl;
cout << mtMin << endl;
    }
     void Maytinhsua(MTXT m[],int&n){
     		bool KT=false;
     		char Ten[20];
		cout<<" Nhap ten may tinh can sua : ";
		cin>>Ten;
		for (int i =0; i< n; i++)
    {
        if (m[i].TimTen(Ten))
        {
            cout << "Nhap thong tin moi cho may tinh xach tay:" << endl;
            cin >> m[i];
           KT = true;
            break;
        }
    }
     if (KT)
    {
        cout << "Sua thong tin may tinh xach tay thanh cong!" << endl;
    }
     else
    {
        cout << "Khong tim thay may tinh xach tay trong danh sach!" << endl;
    }
     }
     void Xoama(MTXT m[],int&n){
     	cout<<" Xoa ma may tinh : ";
  char Ma[20];
   cin>>Ma;
    for(int i=0;i<n;i++){
	if(strcmpi(m[i].getma(),Ma)==0){
		for (int j=i;j<n-1;i++){
			m[j]=m[j+1];
		}
		n--;
		cout<<" Xoa ma may tinh thanh cong !! "<<endl;
		cout<<" Danh sach sau khi xoa : ";
		for(int i=0;i<n;i++){
			
		cout<<m[i];
		}
	}
	else{
		cout << "Khong tim thay may tinh xach tay co ma " << Ma << " trong danh sach." << endl;
	}
}
     }
     void Chenmt(MTXT m[],int&n){
     	cout << "\nChen them may tinh vao DS" << endl;
		for (int i = n; i >0; i--) {
			m[i] = m[i-1];
		}
		MTXT k;
		cout << "Nhap may tinh can them: "<<endl;
	    cin >> k;
		m[0] = k;
		n++;
	 }
      void Danhsachtang(MTXT m[],int&n){
      	for(int i=0;i<n-1;i++){
   	for(int j=i+1;j<n;j++){
	   	if(m[i].getma()>m[j].getma()){
	   		MTXT tg=m[i];
	   		m[i]=m[j];
	   		m[j]=tg;
	   	}
	   }
      	}
      }
 int main(){
    	int luachon;
  	    int n;
  	    MTXT m[200];
  	    do{
 	  	cout<<" Menu "<<endl;
 	  	cout<<"1. Nhap so may tinh xach tay  "<<endl;
 	  	cout<<"3. Nhap thong tin may tinh xach tay can tim "<<endl;
 	  	cout<<"4. Tong phi bao tri "<<endl;
 	  	cout<<"5. May tinh xach tay co toc do nho nhat "<<endl;
 	  	cout<<"6. Nhap ten may tinh can sua  "<<endl;
 	  	cout<<"7. Xoa ma may tinh "<<endl;
 	  	cout<<"8. Chen them may tinh vao DS "<<endl;
 	  	cout<<"9. Danh sanh sap xep theo chieu tang dan cua ma may "<<endl;
 	  	cout<<"2. Danh sach da nhap: "<<endl;
 	  	cout<<" Nhap lua chon cua ban : ";
 	  	cin>>luachon;
 	  	switch(luachon){
 	  		case 1:{
  	 		cout<<" Nhap so may tinh xach tay : ";
            cin>>n;
            for(int i=0;i<n;i++){
	 	    cout<<" May tinh thu : "<<i+1<<endl;
	 	    cin>>m[i];
	         }
	  	 	}
	  	 	break;
	  	 	case 2:{
	 	  		Danhsachnhap(m,n);
	 	  	}
	  	 	break;
	  	 	case 3:
	  	 	{
	 	  		Timkiem(m,n);
	 	  	}
	  	 	break;
	  	 	case 4:{
           Phibaotri(m,n);
	 	  	}
	  	 	break;
	  	 	case 5:
	  	 	{
	 	  		Maymin(m,n);
	 	  	}
	  	 	break;
	  	 	case 6:
	  	 	{
	 	  		Maytinhsua(m,n);
	 	  	}
	  	 	break;
	  	 	case 7:
	  	 	{
	 	  		Xoama(m,n);
	 	  	}
	  	 	break;
	  	 	case 8:{
	 	  		Chenmt(m,n);
	 	  		cout << "\nDS SAU CHEN" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << m[i];
		}
	 	  	}
	  	 	break;
	  	 	case 9:{
 	  		Danhsachtang(m,n);
 	  		cout<<" Danh sanh sap xep theo chieu tang dan cua ma may :"<<endl;
	         for(int i=0;i<n;i++){
 		     cout<<m[i];
 	        }
	 	  	break;
	  	 	}
	       default:{
 	   	cout<<" Ban nhap sai,hay nhap lai";
 	      }
    }}
 	  while(luachon);
  }

 