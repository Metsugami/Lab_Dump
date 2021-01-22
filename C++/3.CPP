#include <iostream.h>
#include <conio.h>
#include <iomanip.h>
#include <stdlib.h>
class deletion
{
 private : int n , i , a[100];
	   int de , p ;
 public : void getdata();
	  void remove();
	  void display();
};
void deletion :: getdata() {
     cout<<"How many elements"<< endl;
     cin>>n;
     cout<<"Enter elements"<< endl;
     for (i=0 ; i<n ; i++)
     cin>>a[i];
     cout<<"Enter position to be deleted ( 0 to"<< n-1<<")"<<endl;
     cin>>p;
}
void deletion :: remove ()
{
 if (p>n-1)
 {
  cout<<"Invalid position"<<endl;
  getch();
  exit (0);
 }
 else
 {
  de=a[p];
  for(i=p; i<n ; i++)
  {
  a[i] = a[i+1];
  }
  n--;
  cout<< de << "is deleted"<< endl;
  }
 }
void deletion :: display()
{
 cout<<"array after deletion:"<< endl;
 for(int j=0 ; j<n ; j++)
 cout<<setw(3)<<a[j];
}

void main ()
{
 clrscr();
 deletion x;
 x.getdata();
 x.remove();
 x.display();
}