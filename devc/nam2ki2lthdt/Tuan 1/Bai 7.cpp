#include<iostream>
#include<cstring>

using namespace std;
class GV{
	private:
  char ht[10];
  int tuoi;
  char bc[10];
  char cn[10];
  float bl;
   public:
   GV(){}
  GV(char*ht,int tuoi,char*bc,char*cn,float bl){
  	strcpy(this->ht,ht);
  	this->tuoi=tuoi;
  	strcpy(this->bc,bc);
  	strcpy(this->cn,cn);
  	this->bl=bl;
}
~GV(){}
void Nhap(){
 	cout<< " Nhap ho ten:";cin.getline(ht,10);
 	cout<< " Nhap tuoi : ";
    cin>>tuoi;
    cin.ignore();
 	cout<< " Nhap bang cap :";cin.getline(bc,10);
    cout<< " Nhap chuyen nganh :";cin.getline(cn,10);
 	cout<< " NHap bac luong : ";cin>>bl;
 	cout<<endl;
}
 float gettienluong(){
 	return bl*1490;
 }
 void Xuat(){
 	cout<< "\n Ho Ten:"<<ht;
 	cout<< "\n Tuoi : "<<tuoi;
 	cout<< "\n Bang Cap :"<<bc;
    cout<< "\n Chuyen Nganh :"<<cn;
 	cout<< "\n Bac Luong : "<<bl;
 	cout<< "\n Tien Luong : "<<gettienluong()<<endl;
 }
};
int main(){
	GV gv;
 cout<< " Nhap thong tin giao vien : "<<endl;
 gv.Nhap();
 cout<< " ---------Thong Tin Giao Vien Giao vien :";
 gv.Xuat();
return 0;
	
}
   
