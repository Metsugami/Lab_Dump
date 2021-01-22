#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<stdlib.h>
class sort
{
    private:
    int a[100],n;
    public:
    void getData();
    void compute();
    void display();
};
void sort::getData()
{
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i =0;i<n;i++)
	cin>>a[i];
}
void sort::compute()
{
    int k,j;
    for(int i = 1;i<n;i++)
    {
        k=a[i];
        j=i;
        while(j>0 && a[j-1]>k)
        {
            a[j]=a[j-1];
            j--;
        }
	a[j]=k;
    }
}
void sort::display()
{
    cout<<"The sorted array is "<<endl;
    for(int i = 0 ; i<n;i++)
        cout<<a[i];
}
void main()
{
    clrscr();
    sort x;
    x.getData();
    x.compute();
    x.display();
    getch();
}