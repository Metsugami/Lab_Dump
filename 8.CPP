#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
class a
{
    public:
    void area(double p)
    {
        cout<<"Area ="<<p*p;        
    }
    void area(double p,double q)
    {
        cout<<"Area ="<<p*q;
    }
    void area(double p, double q, double r)
    {
	double s=p+q+r;
	cout<<"Area ="<< sqrt(s*(s-p)*(s-q)*(s-r));
    }
};
void main()
{
    clrscr();
    a obj;
    int choice,x,y,z;
    cout<<"Enter number of unique side lengths"<<endl;
    cin>>choice;
    switch(choice)
    {
	case 1:
	cout<<"Enter side";
	cin>>x;
	obj.area(x);
	break;
	case 2:
	cout<<"Enter sides";
	cin>>x>>y;
	obj.area(x,y);
	break;
	case 3:
	cout<<"Enter sides";
	cin>>x>>y>>z;
	obj.area(x,y,z);
	break;
	default:
	cout<<"Invalid";
    }
    getch();
}