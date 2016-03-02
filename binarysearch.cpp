# cpp-codes
Cpp lab programs. Basic ones you need to know!
#include<iostream>
using namespace std;
int  main()
{
int a[100],n,i,j,num;
int low,high,mid;

cout<<"\n------------ BINARY SEARCH ------------ \n\n";
cout<<"Enter No. of Elements= ";
cin>>n;

cout<<"\nEnter Elements in sorted order=\n";
for(i=0;i<n;i++)
{
cin>>a[i];
}

cout<<"\nEnter element you want to Search= ";
cin>>num;
low=0;
high=n;

mid=(low+high)/2;
while(low<=high && a[mid]!=num)
{
if(a[mid]<num)
low=mid+1;
else
high=mid-1;

mid=(low+high)/2;
}

if(a[mid]==num)
{
cout<<num<<"  is Found at Location : "<<mid+1;
}
else
{
cout<<"element Not Found";
}
return 0;
}
