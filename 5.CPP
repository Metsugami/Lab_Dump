#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class bisearch
{
    private:
    int a[100],n,se,beg,mid,pos,end;
    public:
    void getData();
    void display();
    void search();
};
void bisearch::getData()
{
    cout<<"Enter no of elements"<<endl;
    cin>>n;
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++)
	cin>>a[i];
    cout<<"Enter the search element"<<endl;
    cin>>se;
}
void bisearch::search()
{
    beg=0,end=n-1;
    pos=-1;
    while(beg<=end)
    {
	mid=(beg+end)/2;
	if(a[mid]==se)
	{
	    pos=mid+1;
	    break;
	}
	if(se>a[mid])
	    beg=mid+1;
	else
	    end=mid-1;
    }
}
void bisearch::display()
{
    if(pos>=0)
	cout<<"found at position "<<pos<<endl;
    else
	cout<<se<<" not found"<<endl;
}
void main()
{
    bisearch x;
    clrscr();
    x.getData();
    x.search();
    x.display();
    getch();
}