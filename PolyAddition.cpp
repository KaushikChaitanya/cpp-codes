#include<iostream>
using namespace std;
int i=0;
class poly
{
public:
int a[25];
int hc;
void getpoly();
void display();
void initialise();
};
void poly::initialise()
{
for(i=0;i<25;i++)
a[i]=0;
}
void poly::getpoly()
{
cout<<"\n enter the highest order in the polynomial:";
cin>>hc;
hc=hc+1;
cout<<"\n enter the coefficients in ascending order of powers:";
for(i=0;i<hc;i++)
{
cin>>a[i];
}
}
void poly::display()
{
for(i=hc-1;i>=0;i--)
{
cout<<a[i]<<"x^"<<i;
if(i!=0)cout<<"+";
}
cout<<endl;
}
int main()
{
poly p1,p2,p3;
p1.initialise();
p2.initialise();
p3.initialise();
p1.getpoly();
p1.display();
p2.getpoly();
p2.display();
if(p1.hc==p2.hc)
p3.hc=p1.hc;
else if(p1.hc>p2.hc)
p3.hc=p1.hc;
else if(p2.hc>p1.hc)
p3.hc=p2.hc;
for(i=0;i<p3.hc;i++)
p3.a[i]=p1.a[i]+p2.a[i];
p3.display();

}
