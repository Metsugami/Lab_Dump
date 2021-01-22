#include<iostream.h>
#include<conio.h>
#include< string.h>
class student
{
	int regno;
	char name[20];
	float fees;
      public:
	void get();
	void display();
};
void student::get()
{
	cout<<"Enter the register number: ";
	cin>>regno;
	cout<<"Enter the name of the student: ";
	cin>>name;
	cout<<"Enter the fees: ";
	cin>>fees;
}
void student::display()
{
	cout<<"Register number: "<<regno<<endl;
	cout<<"Name of the student: "<<name<<endl;
	cout<<"Student fees: "<<fees<<endl;
}
int main()
{
	student s,*sp;
	sp=&s;
	clrscr();
	sp->get();
	sp->display();
	getch();
	return 0;
}