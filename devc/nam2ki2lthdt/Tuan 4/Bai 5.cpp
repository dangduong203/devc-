#include<iostream>
#include<string.h>
using namespace std;
class person{
	protected:
		char name[30];
        char address[40];
        int phone;
    public:
    	person()
		{
			strcpy(this->name,"");
			strcpy(this->address,"");
			this -> phone = 0;
		}
		person(char *name,char *address,int phone){
			strcpy(this->name,name);
			strcpy(this->address,address);
			this->phone=phone;
		}
};
class officer : public person{
	protected:
		int salary;
	public:
		officer(){
			this->salary = 0;
	}
		officer(char *name,char *address,int phone,int salary) : person(name,address,phone){
			this->salary =salary;
	}
	char * GetAdd(){
        return address;
    }	
    float getsalary(){
	    return salary;
    }
};
class manager : public officer{
	protected:
		int extra;
	public:
		manager(){
			this -> extra = 0;
		}
		manager(char *name,char *address,int phone,int salary,int extra) : officer(name,address,phone,salary){
			this -> extra=extra;
		}
		void Nhap(){
	        fflush(stdin);
	        cout<<" ||Nhap name : ";
	        cin.getline(name,30);
	        cout<<" ||Nhap address : ";
	        cin.getline(address,40);
	        fflush(stdin);
	        cout<<" ||Nhap phone : ";
	        cin>>phone;
	        cout<<" ||Nhap salary : ";
	        cin>>salary;
	        cout<<" ||Nhap extra : ";
	        cin>>extra;
	    }
	    void Xuat(){
            cout<<"||Name: "<<name;
            cout<<"\n||Address: "<<address;
            cout<<"\n||Phone: "<<phone;
            cout<<"\n||Salary: "<<salary;
            cout<<"\n||Extra: "<<extra<<endl;
        }    
};
int main (){
	manager p[20];
 	int n;
 	cout<<" Nhap vao so doi tuong manager : ";
 	cin>>n;
 	for(int i=0;i<n;i++){
	 	cout<<"\tDoi tuong thu : "<<i+1<<endl;
	 	p[i].Nhap();
	}
	 cout<<"\t====Danh sach doi tuong da nhap===="<<endl;
	 for(int i=0;i<n;i++){
	 	cout<<"\tDoi tuong thu : "<<i+1<<endl;
	 	p[i].Xuat();
    }
    cout<<"\t====Danh sach doi tuong can tim===="<<endl;
    for(int i=0;i<n;i++){
        if((strcmpi(p[i].GetAdd(), "Ha Noi") == 0)&&p[i].getsalary()!=10000000){
	    p[i].Xuat();
    }
}
}
