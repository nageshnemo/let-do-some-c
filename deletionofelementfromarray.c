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
for(i=0;i<n;i++)
{
if(a[i]==element)
location=i;
}
for(i=n-1;i>=location;i--)
{

    a[i-1]=a[i];

}


for(i=0;i<n;i++)
{

    cout<<"    "<<a[i];
}
getch();



}


