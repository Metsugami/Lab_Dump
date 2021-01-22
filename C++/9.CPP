#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
class cube
{
    private:
    int n,c;
    public:
    void getData();
    void findcube();
    void display();
};
void cube::getData()
{
    cout<<"Enter a number to find the cube"<<endl;
    cin>>n;
}
inline void cube::findcube()
{
    c=n*n*n;
}
void cube::display()
{
    cout<<"cube of"<<n<<"="<<c<<endl;
}
void main()
{
    clrscr();
    cube x;
    x.getData();
    x.findcube();
    x.display();
    getch();
}