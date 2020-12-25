
#include<stdlib.h>
#include <iostream.h>
#include <conio.h>
class Insert
{
 private: int a[100],n,i,ie,p;
 public: void data();
	 void insert();
	 void disp();
};
void Insert::data()
{
  cout<<"how many elements?"<<'\n';
  cin>>n;
  cout<<"enter them:"<<'\n';
  for(i=0;i<n;i++)
  cin>>a[i];
  cout<<"enter element to be inserted"<<'\n';
  cin>>ie;
  cout<<"enter position"<<'\n';
  cin>>p ;
  if(p>n)
  { cout<<"invalid"; exit(0);}
}
void Insert::insert()
{
  for(i=n-1;i>=p;i--)
  a[i+1]=a[i];
  a[p]=ie;
  n++;
}
void Insert::disp()
{
  cout<<"new array: "<<'\n';
  for(i=0;i<n;i++)
  cout<<a[i]<<'\t';
}
void main()
{
  clrscr();
  Insert ob;
  ob.data();
  ob.insert();
  ob.disp();
  getche();
}