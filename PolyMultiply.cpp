#include<iostream>
using namespace std;
int main()
{
int i,j,m,n;
cout<<"enter the highest degree of first polynomial";
cin>>m;
int a[m];
for(i=0;i<m;i++)
{
cout<<"enter the value of co-efficient  "<<i<<":  ";
cin>>a[i];
}
cout<<"\nthe polynomial  is\n";
for(i=m-1;i>=0;i--)
{
cout<<a[i]<<"x^"<<i;
if(i>0)
cout<<"  +  ";
}
cout<<"\nenter the highest degree of second polynomial";
cin>>n;
int b[n];
for(i=0;i<n;i++)
{
cout<<"enter the value of co-efficient  "<<i<<":  ";
cin>>b[i];
}
cout<<"\nthe polynomial is\n";
for(i=n-1;i>=0;i--)
{
cout<<b[i]<<"x^"<<i;
if(i>0)
cout<<"  +  ";
}
int c[m+n];
for(i=0;i<m+n;i++)
c[i]=0;

for(i=m-1;i>=0;i--)
for(j=n-1;j>=0;j--)
c[i+j]+=a[i]*b[j];
cout<<"\nafter multiplication";
cout<<"\n \n";
for(i=m+n-2;i>=0;i--)
{
cout<<c[i]<<"x^"<<i;
if(i>0)
cout<<"  +  ";
}
cout<<"\n";
return 0;
}
