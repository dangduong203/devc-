#include<iostream>
#include<string.h>
using namespace std;
class Tau
{
  char hang[30], vt[20];
  int namsx;
 public:
  Tau(char* hang, char* vt, int namsx)
  {
   strcpy(this ->hang, hang);
   strcpy(this-> vt, vt);
   this ->namsx = namsx;
  }
  ~Tau()
   {
    
   }
  void Nhap()
  { cin.ignore(1);
   cout<<"\n - Nhap Hang san xuat: "; 
   cin.getline(this->hang,30);
   cout<<"\n - Nhap van toc toi da: "; 
   cin.getline(this->vt, 20);
   cout<<"\n - Nhap nam san xuat: "; 
   cin>>this -> namsx;
  }
  void Xuat()
  {
   cout<<"\n Hang san xuat: "<<this->hang;
   cout<<"\n Van toc toi da: "<<this ->vt;
   cout<<"\n Nam san xuat: "<<this->namsx;
  }
  int GetNamSX()
  {
   return namsx;
   }
};

class Tauchien: public Tau
{
 char loaitau[20];
 int tt;
 public:
  Tauchien(char hang[]="", char vt[]="", int namsx=1990, char loaitau[]="", int tt = 0): Tau(hang,vt,namsx)
  {
   strcpy(this ->loaitau, loaitau);
   this ->tt = tt;
  }
  ~Tauchien()
  {  
  }
 long TinhtienSC()
 {
  if(GetNamSX()<=1990)
   return 50000000;
  else
   if(GetNamSX()<=2000)
    return 30000000;
  return 10000000;
 }
/*
 friend bool operator > (Tauchien a, Tauchien b)
 {
  return a.tt>b.tt;
 }*/

 bool operator > (Tauchien b)
 {
  return this->tt > b.tt;
 }
 friend ostream & operator <<(ostream &os, Tauchien &p)
 { 
  p.Xuat();  // goi ham xua cua lop Tau
  cout<<"\n Loai tau: "; os<<p.loaitau;
  cout<<"\n Trong tai: "; os<<p.tt;
  return os;
  
 }
 friend istream & operator >>(istream &is, Tauchien &p)
 {
  p.Nhap();
  cin.ignore(1);
  cout<<"\n - Nhap loai tau: "; is.getline(p.loaitau, 20);
  cout<<"\n - Nhap trong tai: "; is>>p.tt;
  return is;
 }
 bool operator == (int x)
 {
  return GetNamSX()== x;
 }
};
main()
{
 Tau t[30];
 int n;
 cout<<"\n Nhap so tau: "; cin>>n;
 for(int i=0;i<n; i++)
  {
   cout<<"\n Nhap tau thu: "<<i+1;
   t[i].Nhap();
  }
 for(int i=0;i<n; i++)
  {
   t[i].Xuat();
  }

    Tauchien tc[30];
 cout<<"\n Nhap so tau chien: "; cin>>n;
 for(int i=0;i<n; i++)
  {
   cout<<"\n Nhap tau thu: "<<i+1;
   cin>>tc[i];  // suwr dung toan tu nhap da viet.
  }
 for(int i=0;i<n; i++)
  {
   cout<<tc[i]; // sd toan tu xuat
  }
  // SX
   for(int i=0;i<n; i++)
    for(int j = i+1;j<n; j++)
     if(tc[i]>tc[j])
      {
       Tauchien tg = tc[i];
          tc[i] = tc[j];
          tc[j] = tg;
      }
   for(int i=0;i<n; i++)
  {
   cout<<tc[i]; // sd toan tu xuat
  }
 // dem 
 int dem =0;
  for(int i=0;i<n; i++)
   if(tc[i] == 1990)
      dem ++;
 cout<<"\n So tau chien co NSX = 1990: "<<dem;
     
 return 0;
}
