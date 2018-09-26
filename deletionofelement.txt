#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[10],i,n,element,location;
cout<<"enter how many elements you want to insert in an array elements into an array:";
cin>>n;
cout<<"enter elements ";

for(i=0;i<n;i++)
{
cin>>a[i];
}

for(i=0;i<n;i++)
{
cout<<a[i];
}
cout<<"enter the element you want to delete from array";
cin>>element;
for(i=0;i<n;i++)

{
if(a[i]==element)
location=i;
}
for(i=location;i<=n-1;i++)
{

    a[i]=a[i+1];

}


for(i=0;i<n-1;i++)
{

    cout<<"    "<<a[i];
}
getch();



}


