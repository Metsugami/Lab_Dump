#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

class Freq
{
  private: int a[100],n,i,s,c;
  public: void getdata();
	  void freq();
	  void display();
};
void Freq::getdata()
{
   cout<<"how many elements?"<<endl;
   cin>>n;
   cout<<"enter the elements"<<endl;
   for(i=0;i<n;i++)
   cin>>a[i];
   cout<<"enter element to be checked"<<endl;
   cin>>s;
}
void Freq::freq()
{
  c=0;
  for(i=0;i<n;i++)
  {
    if(a[i]==s)
    c++;
  }
}
void Freq::display()
{
   if(c>0)
   cout<<"frequency of"<<s<<" is "<<c<<endl;
   else
   cout<<"not present";
}
void main()
{
  clrscr();
  Freq ob;
  ob.getdata();
  ob.freq();
  ob.display();
  getche();
}
