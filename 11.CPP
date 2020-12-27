#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class student
{
	   int rollno;
	   char name[20];
	public:
	   void read()
	   {
	       cout<<"Enter the name: ";
	       cin.getline(name, 20);
	       cout<<"Enter roll no: ";
	       cin>>rollno;
	   }
	   void display()
	   {
	       cout<<"Roll no: "<<rollno<<endl;
	       cout<<"Name: "<<name<<endl;
	   }
};
class marks : public student
{
	    int m1;
	    int m2;
	    int total;
	public:
	    void read1()
	    {
		cout<<"Enter two subject marks: ";
		cin>>m1>>m2;
		total=m1+m2;
	    }
	    void display1()
	    {
		cout<<"Subject 1: "<<m1<<endl;
		cout<<"Subject 2: "<<m2<<endl;
		cout<<"Total marks: "<<total<<endl;
	    }
};
void main()
{
	marks ob;
	ob.read();
	ob.read1();
	ob.display();
	ob.display1();
}

