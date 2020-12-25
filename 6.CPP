#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class sinterest
{
    private:
    float p,t,r,si;
    public:
    void getData();
    void compute();
    void display();
};
void sinterest::getData()
{
    cout<<"Enter principle, time and rate"<<endl;
    cin>>p>>t>>r;
}
void sinterest::compute()
{
    si=(p*t*r)/100;
}
void sinterest::display()
{
    cout<<"Principle: "<<p<<endl;
    cout<<"Time: "<<t<<endl;
    cout<<"Rate of Interest: "<<r<<endl;
    cout<<"Simple Interest: "<<si;
}
void main()
{
    clrscr();
    sinterest x;
    x.getData();
    x.compute();
    x.display();
    getch();
}