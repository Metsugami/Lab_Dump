#include<iostream.h>
#include<conio.h>
class copy
{
	int var, sum, term;
       public:
	double calculate();
	copy(int temp, int x)
	{
	     var=temp;
	     term=x;
	}
};
double copy::calculate()
{
	int p;
	sum=1;
	p=term;
	for(int i=1; i<=var; i++)
	{
	   sum=sum+p;
	   p=p*term;
	}
	return sum;
}
void main()
{
	int n, t;
	clrscr();
	cout<<"Enter the base and the power(x and n): ";
	cin>>t>>n;
	copy obj(n,t);
	copy cpy=obj;
	cout<<"The sum of the series "<<obj.calculate();
	getch();
}