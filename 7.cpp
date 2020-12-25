#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
class quadratic
{
    private:
            double a,b,c,d,r1,r2;
    public:
            void getData();
            void compute();
            void display();
};
void quadratic::getData()
{
    cout<<"Enter the co-efficents"<<endl;
    cin>>a>>b>>c;
}
void quadratic::compute()
{
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        cout<<"Roots are equal"<<endl;
        r1=-b/(2*a);
        r2=r1;
    }
    else if(d>0)
    {
        cout<<"Roots are real and different"<<endl;
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
    }
    else
    {
        cout<<"Roots are imaginary"<<endl;
        getch();
        exit(0);
    }
}
void quadratic::display()
{
    cout<<"root 1= "<<r1<<endl;
    cout<<"root 2= "<<r2<<endl;
}
void main()
{
    clrscr();
    quadratic x;
    x.getData();
    x.compute();
    x.display();
    getch();
}
